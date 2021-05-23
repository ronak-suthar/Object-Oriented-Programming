// Having File data.txt reading data from it
// And Output all data in a new file name output.txt
#include<iostream>
#include<fstream>

using namespace std;

int main(void){

    ifstream in;
    ofstream out;

    in.open("input.txt",ios::in);
    out.open("output.txt",ios::out);

    string line;

    while(!in.eof()){
        getline(in,line);
        out<<line;
    }

    in.close();
    out.close();


    return 0;
}