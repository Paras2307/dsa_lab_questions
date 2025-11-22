#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class Stack{
    Node* top;
    int size;
public:
    Stack(){
        top = NULL;
        size = 0;
    }
    void push(int value){
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        size++;
    }  
    int pop(){
        if(top == NULL){
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        }
        Node* temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;
        size--;
        return poppedValue;
    }
    int peek(){
        if(top == NULL){
            cout << "Stack is empty. Cannot peek." << endl;
            return -1;
        }
        return top->data;
    }
    void display(){
        Node* current = top;
        while(current != NULL){
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Stack elements: ";
    stack.display();
    cout << "Top element: " << stack.peek() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack elements after pop: ";
    stack.display();
    return 0;
}