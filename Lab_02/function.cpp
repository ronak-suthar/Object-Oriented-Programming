#include<iostream>

using namespace std;
void exchange(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}

void check_even_odd(int num){   
    if(num%2==0){
        cout<<num<<" is a EVEN number\n";
    }
    else{
        cout<<num<<" is a ODD number\n";
    }
}
int main(void){
    //Functions are used to make modular codes and avoid redundancy

    int a,b;

    cout<<"Enter value of a and b seprated by space : ";
    cin>>a>>b;

    cout<<"Exchangeing content of a and b using function\n";

    cout<<"Values before exchange , a : "<<a<<" b : "<<b<<endl;

    exchange(&a,&b);

    cout<<"Values after exchange , a : "<<a<<" b : "<<b<<endl;

    int value;

    cout<<"Enter number to check if it's even or odd : ";
    cin>>value;

    check_even_odd(value);


    return 0;

}