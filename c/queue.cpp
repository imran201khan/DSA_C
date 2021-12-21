#include<iostream>

using namespace std;
#define n 20
class queue{
    int*arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        back=-1;
        front=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"overflow"<<endl;
            return;

        }
        back++;
        if(front==-1){
            front++;
        }
        arr[back]=x;
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return -1;
        }
        return arr[front];
        
    }
    bool isEmpty(){
        if(front==-1 || front>back){
            return true;

    }
    return false;}
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.isEmpty()<<endl;





    return 0;
}