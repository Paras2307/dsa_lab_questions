#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void deleteByValue(int val){
        if(head==NULL) return;
        if(head->data==val){
            Node* toDelete=head;
            head=head->next;
            delete toDelete;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL && temp->next->data!=val){
            temp=temp->next;
        }
        if(temp->next==NULL) return;
        Node* toDelete=temp->next;
        temp->next=temp->next->next;
        delete toDelete;
    }
    void deleteByPosition(int pos){
        if(head==NULL || pos<0) return;
        if(pos==0){
            Node* toDelete=head;
            head=head->next;
            delete toDelete;
            return;
        }
        Node* temp=head;
        for(int i=0; temp!=NULL && i<pos-1; i++){
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL) return;
        Node* toDelete=temp->next;
        temp->next=temp->next->next;
        delete toDelete;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.head=new Node(10);
    ll.head->next=new Node(20);
    ll.head->next->next=new Node(30);
    ll.head->next->next->next=new Node(40);
    cout<<"Original List: ";
    ll.display();
    ll.deleteByValue(20);
    cout<<"After deleting value 20: ";
    ll.display();
    ll.deleteByPosition(1);
    cout<<"After deleting position 1: ";
    ll.display();
    return 0;
}