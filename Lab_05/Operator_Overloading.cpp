#include<iostream>

using namespace std;

class Complex{
    private: 
    int real;
    int imag;

    public:

    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }

    Complex operator+(const Complex& temp){
        return Complex(real+temp.real,imag+temp.imag);
    }

    Complex operator-(const Complex& temp){
        return Complex(real-temp.real,imag-temp.imag);
    }

    Complex operator*(const Complex& temp){
        return Complex(real*temp.real - imag*temp.imag,real*temp.imag+imag*temp.real);
    }
    
    friend ostream& operator << (ostream&,const Complex&);
    friend istream& operator >> (istream&,Complex&);
};

ostream& operator << (ostream& op,const Complex& temp){
        op<<"["<<temp.real<<" + i "<<temp.imag<<"]";
        return op;
}
istream& operator >> (istream& ip,Complex& temp){
    ip>>temp.real>>temp.imag;
    return ip;
}


int main(void){
    Complex a(5,10),b(2,3);

    Complex d = a + b;
    Complex e = a - b;
    Complex f = a*b;

    cout<<"------------Complex Class Opeartions ------------\n";
    cout<<"Addition of "<<a<<" & "<<b<<" is : "<<d<<endl;
    cout<<"Subtraction of "<<a<<" & "<<b<<" is : "<<e<<endl;
    cout<<"Multiplication of "<<a<<" & "<<b<<" is : "<<f<<endl;

    /*Corresponding Output

    ------------Complex Class Opeartions ------------
    Addition of [5 + i 10] & [2 + i 3] is : [7 + i 13]
    Subtraction of [5 + i 10] & [2 + i 3] is : [3 + i 7]
    Multiplication of [5 + i 10] & [2 + i 3] is : [-20 + i 35]

    */

    return 0;
}