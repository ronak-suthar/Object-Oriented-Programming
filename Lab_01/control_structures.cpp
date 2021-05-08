#include<iostream>

using namespace std;

int main(void){

    // Implementing if-else control using example of leap year

    int year;
    
    cout<<"Enter Year to check if leap or not : ";
    cin>>year;

    if(year%4==0 && (year%100!=0 || year%400==0)){
        cout<<year<<" is a LEAP YEAR !\n";
    }
    else{
        cout<<year<<" is a NOT a leap year !\n";
    }

    // Implementing loops using example of factorial calculation

    int num;
    cout<<"Enter number less upto 10 to calculate it's factorial : ";
    cin>>num;

    unsigned long int fact=1;
    int temp=num;

    while(temp){
        fact*=temp--;
    }

    cout<<"Factorial of "<<num<<" is : "<<fact<<endl;

    return 0;
}