#include<iostream>
using namespace std;
class Queue{
    int front, rear, size;
    int* arr;
public:
    Queue(int s){
        front = 0;
        rear = -1;
        size = s;
        arr = new int[s];
    }
    void enqueue(int value){
        if(rear == size - 1){
            cout << "Queue is full." << endl;
            return;
        }
        rear++;
        arr[rear] = value;
        cout << "Enqueued " << value << " into the queue." << endl;
    }
    int dequeue(){
        if(front > rear){
            cout << "Queue is empty." << endl;
            return -1;
        }
        int temp = arr[front];
        front++;
        cout << "Dequeued " << temp << " from the queue." << endl;
        return temp;
    }
    int peek(){
        if(front > rear){
            cout << "Queue is empty. Cannot peek." << endl;
            return -1;
        }
        return arr[front];
    }
    void display(){
        if(front > rear){
            cout << "Queue is empty." << endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Queue q(5);
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