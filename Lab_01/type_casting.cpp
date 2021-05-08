#include<iostream>

using namespace std;
class car{
    int make_year;

    public:

    car(int yr=0){
        make_year=yr;
    }
    int get() const{
        return make_year;
    }
    void set(int val){
        make_year=val;
    }
};
void print(char* str){
    cout<<str<<endl;
}
int main(void){
    //Implementation of both C-Style & C++ Style Casting is Done in this program

    //C-Style casting should be avoided in C++ as i can be costly and dangerous

    const char* city="Bombay";

    //print(city); Will throw an error as function is not receiving a const pointer

    print((char*) city); //C-Style Casting

    print(const_cast<char*>(city)); //C++ Style Casting

    const car fortuner(2019);

    cout<<fortuner.get()<<endl;

    //fortuner.set(2021); will throw an error as object is of const type

    ((car&)fortuner).set(2021);
    cout<<fortuner.get()<<endl;

    const_cast<car&>(fortuner).set(2021);
    cout<<fortuner.get()<<endl;


    return 0;
}