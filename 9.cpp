#include<iostream>
#include<vector>
using namespace std;
class Stack{
    int* arr;
    int size;
    int top;
    public:
    Stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }
    void push(int value){
        if(top==size-1){
            cout<<"Stack full"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            cout<<"Popped "<<arr[top]<<" from the stack"<<endl;
            return arr[top--];
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }    
    void display(){
        for(int i=0 ; i<=top; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.pop();
    cout<<"Top element: "<<st.peek()<<endl;
    st.push(30);
    st.push(40);
    st.display();
    return 0;
}