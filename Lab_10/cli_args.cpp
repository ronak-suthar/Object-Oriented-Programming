// Add security to program Using CLA 
// To avoid unauthorised usage

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{   
    string pass = "CLIARGS_155";

	cout << "You have entered password as : ";

	for (int i = 1; i < argc; ++i){
		cout << argv[i] << "\n";
    }

    if((string)argv[1]==pass){
        cout<<"Access Granted\n";
    }
    else{
        cout<<"Wrong Password\n";
    }

    /*OUTPUT

    You have entered password as : CLIARGS_155
    Access Granted

    */

	return 0;
}
