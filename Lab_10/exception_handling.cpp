//OTP input length checker
//If given OTP is not of length 6 then
//Exception is raised

#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    int otp;

    while(true){
        cout<<"Enter OTP for Validation : ";
        cin>>otp;

        try{
            int length = (otp<=9) ? 1 : floor(log10(otp)+1);

            if(length!=6){
                throw 1;
            }
            else{
                cout<<"Validation Done !"<<endl;
                break;
            }
        }
        catch(int error){
            cout<<"OTP has to be of 6 letters !\n";
            cout<<"Re-Enter the OTP\n";
        }
    }

    /*  OUTPUT

    Enter OTP for Validation : 1523
    OTP has to be of 6 letters !
    Re-Enter the OTP
    Enter OTP for Validation : 125678
    Validation Done !
    
    */

    return 0;
}