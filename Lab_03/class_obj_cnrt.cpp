#include<iostream>

using namespace std;

class car{
    private:

    string name;
    int make_year;
    int power;

    public:

    car(const string& nm="n/a",const int yr=0,const int hp=0){
        name=nm;
        make_year=yr;
        power=hp;
    }

    void display(void){
        cout<<"-----------------Welcome to Car's Info-----------------\n";

        cout<<endl<<"Name of Car : "<<name<<endl;
        cout<<endl<<"Manufacturing Year : "<<make_year<<endl;
        cout<<endl<<"Horse Power : "<<power<<endl;

        cout<<"-----------------Thank You Visit Again-----------------\n";
    }
};
int main(void){

    car swift_desire("Maruti Swift Desire",2021,500);

    car innova("Toyota Innova",2021,1159);

    swift_desire.display();

    innova.display();

    return 0;
}