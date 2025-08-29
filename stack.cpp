#include<iostream>
using namespace std;

class stack{

public:
    int* arr;
    int size;
    int topelement;
    stack(){
    arr=new int[size];
    topelement=-1;
    }
void push(int e){
     if(topelement==size-1){
        cout<<"Stack is full"<<endl;
        return;
     }
     topelement++;
     arr[topelement]=e;
}
void pop(){
     if(topelement==-1){
        cout<<"Stack is empty"<<endl;
        return;
     }
     topelement--;
}
int peak(){
     if(topelement==-1){
            cout<<"stack is empty"<<endl;
        return -1;
     }
     cout<<"top :";
     return arr[topelement];
}
void show(){
       if(topelement==-1){
        cout<<"stack empty"<<endl;
        return;
       }
       cout<<"Stack: ";
       for(int i=0;i<=topelement;i++){
        cout<<arr[i]<<" ";
       }
}

};
int main(){
    stack s;
    s.push(1);
    cout<<s.peak()<<endl;
    s.push(3);
    s.push(4);
    s.show();
}
