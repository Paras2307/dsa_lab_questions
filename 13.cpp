#include <iostream>
#include <stack>
using namespace std;
class Queue{
    stack<int> s1, s2;
public:
    void enqueue(int value){
        s1.push(value);
        cout << "Enqueued " << value << " into the queue." << endl;
    }
    int dequeue(){
        if(s2.empty()){
            if(s1.empty()){
                cout << "Queue is empty." << endl;
                return -1;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int temp = s2.top();
        s2.pop();
        cout << "Dequeued " << temp << " from the queue." << endl;
        return temp;
    }
    int peek(){
        if(s2.empty()){
            if(s1.empty()){
                cout << "Queue is empty." << endl;
                return -1;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    void display(){
        if(s1.empty() && s2.empty()){
            cout << "Queue is empty." << endl;
            return;
        }
        stack<int> tempStack;
        while(!s2.empty()){
            tempStack.push(s2.top());
            s2.pop();
        }
        while(!tempStack.empty()){
            cout << tempStack.top() << " ";
            s2.push(tempStack.top());
            tempStack.pop();
        }
        stack<int> reverseS1;
        while(!s1.empty()){
            reverseS1.push(s1.top());
            s1.pop();
        }
        while(!reverseS1.empty()){
            cout << reverseS1.top() << " ";
            s1.push(reverseS1.top());
            reverseS1.pop();
        }
        cout << endl;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Queue elements: ";
    q.display();
    q.dequeue();
    cout << "Front element: " << q.peek() << endl;
    q.display();
    return 0;
}