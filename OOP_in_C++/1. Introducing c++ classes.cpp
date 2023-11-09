#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

class Stack{
public:
    int stck[SIZE];
    int tos;
    public:
    void init();
    void push(int i);
    int pop();
};

void Stack::init(){
    tos = 0;
}

void Stack::push(int x){
    if(tos == SIZE){
        cout<<"Stack is full"<<endl;
        return ;
    }
    stck[tos] = x;
    tos++;
}

int Stack::pop(){
    if(tos == 0){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}



int main(){

    Stack st1 , st2;

    st1.init();
    st2.init();

    st1.push(1);
    st2.push(2);

    st1.push(3);
    st2.push(4);

    cout<<st1.pop()<<endl;
    cout<<st1.pop()<<endl;
    cout<<st2.pop()<<endl;
    cout<<st2.pop()<<endl;
    

    return 0;
}