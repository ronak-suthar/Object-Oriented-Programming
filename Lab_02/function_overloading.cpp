#include<iostream>

using namespace std;

int add(int a,int b){
    return a+b;
}
double add(double a,double b){
    return a+b;
}
int divide(int a,int b){
    return a/b;
}
double divide(double a,double b){
    return a/b;
}

int main(void){
    //Sometimes we need our function to handle multiple queries
    //Going old way will cause us define many functions with different names

    //Using concept of function overloading a function with same name
    //Can be defined for several different parameter inputs

    int a=10,b=20;

    double c=20.25,d=30.50;

    cout<<"Addition is a & b : "<<add(a,b)<<endl;
    cout<<"Addition is c & d : "<<add(c,d)<<endl;

    cout<<"Divison is a & b : "<<divide(a,b)<<endl;
    cout<<"Divison is c & d : "<<divide(c,d)<<endl;

    return 0;
}