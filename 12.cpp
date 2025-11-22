#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
class Queue{
    Node* front,* rear;
    int size;
public:
    Queue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enqueue(int value){
        Node* newNode = new Node(value);
        if(rear == NULL){
            front = rear = newNode;
        } else{
            rear->next = newNode;
            rear = newNode;
        }
        size++;
        cout << "Enqueued " << value << " into the queue." << endl;
    }
    int dequeue(){
        if(front == NULL){
            cout << "Queue is empty." << endl;
            return -1;
        }
        Node* temp = front;
        int dequeuedValue = front->data;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
        size--;
        cout << "Dequeued " << dequeuedValue << " from the queue." << endl;
        return dequeuedValue;
    }
    int peek(){
        if (front == NULL){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }
    void display(){
        if(front == NULL){
            cout << "Queue is empty." << endl;
            return;
        }
        Node* current = front;
        while(current != NULL){
            cout << current->data << " ";
            current = current->next;
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