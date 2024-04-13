#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size=size;
        this->top1=-1;
        this->top2=size;
    }

    void push1(int data){
        if(top2-top1==1){
            cout<<"Overflow"<<endl;
        }
        else{

            top1++;
            arr[top1]=data;
        }

    }

    void push2(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }
        else{

            top2--;
            arr[top2]=data;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"Underflow"<<endl;
        }

        else{
            arr[top1]=0;
            top1--;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"Underflow"<<endl;
        }

        else{
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<endl;
        cout<<"Top1 element: "<<top1<<endl;
        cout<<"Top2 element: "<<top2<<endl;

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
 
    Stack st(6);

    st.push1(10);
    st.push1(20);
    st.print();

    st.push2(100);
    st.print();


 
 
return 0;
}