#include<iostream>

using namespace std;

template <class data_type>
class stack{
    private:

    data_type* ptr = NULL;
    int top;
    int size;

    public:

    stack(int size_=0){
        size=size_;
        ptr = new data_type[size_];
        top=-1;
    }

    bool is_empty(void){
        if(top==-1){
            cout<<"Under-Flow\n";
            return true;
        }
        return false;
    }
    bool is_full(void){
        if(top==size){
            cout<<"Over-Flow\n";
            return true;
        }
        return false;
    }
    void push(data_type num=0){
        if(!is_full()){
            ptr[++top]=num;
        }
    }
    void pop(void){
        if(!is_empty()){
            --top;
        }
    }
    void peek(void){
        if(!is_empty()){
            cout<<"Peeked Item : "<<ptr[top]<<endl;
        }
    }
    void display(void){

        if(is_empty()){
            return;
        }
        int temp=top;

        printf("\nStack looks like :\n");
        printf("---------\n");

        while(temp!=-1){
            cout<<"| "<<ptr[temp--]<<" |\n";
            printf("---------\n");
        }
        printf("\n");

    }
};
int main(void){
    stack<float> data(10);

    cout<<"Pushing 10,20,30,40,50 on stack we get \n";

    data.push(10.55);
    data.push(20.23);
    data.push(30.28);
    data.push(40.74);
    data.push(50.16);

    data.display();

    cout<<"Popping one element we get \n";

    data.pop();

    data.display();

    cout<<"Viewing the peek element : ";

    data.peek();

    stack<char> letters(10);

    cout<<"Pushing a,b,c,d,e,f data_typeo stack we get \n";

    letters.push('a');
    letters.push('b');
    letters.push('c');
    letters.push('d');
    letters.push('e');

    letters.display();

    cout<<"Popping one element we get \n";

    letters.pop();

    letters.display();

    cout<<"Viewing the peek element : ";

    letters.peek();

    /* Corresponding Output of Program 

    Pushing 10,20,30,40,50 on stack we get 

    Stack looks like :
    ---------
    | 50.16 |
    ---------
    | 40.74 |
    ---------
    | 30.28 |
    ---------
    | 20.23 |
    ---------
    | 10.55 |
    ---------

    Popping one element we get 

    Stack looks like :
    ---------
    | 40.74 |
    ---------
    | 30.28 |
    ---------
    | 20.23 |
    ---------
    | 10.55 |
    ---------

    Viewing the peek element : Peeked Item : 40.74
    Pushing a,b,c,d,e,f data_typeo stack we get 

    Stack looks like :
    ---------
    | e |
    ---------
    | d |
    ---------
    | c |
    ---------
    | b |
    ---------
    | a |
    ---------

    Popping one element we get 

    Stack looks like :
    ---------
    | d |
    ---------
    | c |
    ---------
    | b |
    ---------
    | a |
    ---------

    Viewing the peek element : Peeked Item : d

    */

    return 0;
}