#include<iostream>
#define n 1000
using namespace std;
class stack{
     int top;
     int*arr;
     public:
     stack(){
         arr=new int[n];
         top=-1;
     }
     void push(int x){
         if(top==n-1){
             cout<<"stack overflow"<<endl;
             return;
         }
         ++top;
         arr[top]=x;
     }
     void pop(){
         if(top==-1){
             cout<<"stack underflow"<<endl;
         }
         top--;
     }
     int Top(){
         if(top==-1){
            return -1 ;
         }
         return arr[top];
     }
     bool isEmpty(){
         
         return top==-1;

     }
    
};


int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.isEmpty();
    

    return 0;
}