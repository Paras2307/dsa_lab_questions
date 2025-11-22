#include<iostream>
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
class LinkedList{
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }
    void insertAtBeginning(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning." << endl;
    }
    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
        } else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted " << value << " at the end." << endl;
    }
    void insertAtPosition(int value, int pos){
        if(pos < 0){
            cout << "Invalid position." << endl;
            return;
        }
        if(pos == 0){
            insertAtBeginning(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Invalid." << endl;
                delete newNode;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Inserted " << value << " at position " << pos << "." << endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtBeginning(5);
    ll.insertAtPosition(7, 1);
    ll.insertAtPosition(15, 5);
    return 0;
}