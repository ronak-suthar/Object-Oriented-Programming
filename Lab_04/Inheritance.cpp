#include<iostream>

using namespace std;

class Vehicle{
    protected:
    int power;
    string model;
    string category;

    public:

    Vehicle(int pw=0,const string& mdl="N/A",const string& cat="N/A"){
        power=pw;
        model=mdl;
        category=cat;
    }
};

class Car : public Vehicle{
    private:
    bool airbags;
    bool automatic;

    public:

    Car(int pw=0,const string& mdl="N/A",const string& cat="N/A",bool sfy=0,bool trans=false):Vehicle(pw,mdl,cat){
        airbags=sfy;
        automatic=trans;
    }

    void view(void){
        cout<<"-------Welcome to Shri Automobiles------------\n";
        cout<<"Car Model Name : "<<this->model<<endl;
        cout<<"Horse-Power : "<<this->power<<endl;
        cout<<"Category of Vehicle : "<<this->category<<endl;
        cout<<"Equipped with Airbags : ";

        this->airbags ? cout<<"YES\n" : cout<<"NO\n";

        cout<<"Transmission is : ";

        this->automatic ? cout<<"Automatic\n" : cout<<"Manual Gear Shift\n";
    }
};

class Truck : public Vehicle{
    private:
    int axles;
    bool cabin;

    public:

    Truck(int pw=0,const string& mdl="N/A",const string& cat="N/A",int axl=0,bool cab=false) :Vehicle(pw,mdl,cat){
        axles=axl;
        cabin=cab;
    }

    void view(void){
        cout<<"-------Welcome to Shri Automobiles------------\n";
        cout<<"Truck Model Name : "<<this->model<<endl;
        cout<<"Horse-Power : "<<this->power<<endl;
        cout<<"Category of Vehicle : "<<this->category<<endl;
        cout<<"Load Axles  : "<<this->axles;
        cout<<"Factory Fitted Cabin : ";

        this->cabin ? cout<<"YES\n" : cout<<"NO\n";

    }
};
int main(void){
    //This Program Illustrates the use of Inheritance

    Car Nexon(1500,"TATA Nexon XZ","Non-Commercial",true,false);

    Nexon.view();

    Truck Prima(10000,"TATA PRIMA","Commercial",18,true);

    Prima.view();

    /* Corresponding Ouput

    -------Welcome to Shri Automobiles------------
    Car Model Name : TATA Nexon XZ
    Horse-Power : 1500
    Category of Vehicle : Non-Commercial
    Equipped with Airbags : YES
    Transmission is : Manual Gear Shift
    -------Welcome to Shri Automobiles------------
    Truck Model Name : TATA PRIMA
    Horse-Power : 10000
    Category of Vehicle : Commercial
    Load Axles  : 18Factory Fitted Cabin : YES

    */
    return 0;
}