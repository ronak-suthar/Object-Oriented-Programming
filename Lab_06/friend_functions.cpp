#include<iostream>

using namespace std;

class Company{
    private:

    string name;
    string GST_num;
    string state;
    string license;
    bool essential;

    public:
    typedef const string& str_data;

    Company(str_data nm="n/a",str_data st="n/a",str_data lse="n/a",str_data gst=0,bool cat=false){
        name=nm;
        state=st;
        license=lse;
        GST_num=gst;
        essential=cat;
    }
    friend void INCOME_TAX_DEPT_GOI(const Company&);
};

void INCOME_TAX_DEPT_GOI(const Company& temp){
    cout<<"GST For Details of Company : "<<temp.GST_num<<endl;
}
int main(void){
    Company Sundar_Biscuits("Sunder Biscuits Nagpur","Maharashtra","FOOD","BGLOV56THHJ",true);
    Company Jubliee_Bakery("Jubliee Bakery Nagpur","Maharashtra","BAKERY & DAIRY","GSOT77THIKL",true);
    Company DMART_Store_NGP("DMART Nagpur","Maharashtra","RETAIL","JIHGHY77GHK",true);

    INCOME_TAX_DEPT_GOI(Sundar_Biscuits);
    INCOME_TAX_DEPT_GOI(Jubliee_Bakery);
    INCOME_TAX_DEPT_GOI(DMART_Store_NGP);

    return 0;
}