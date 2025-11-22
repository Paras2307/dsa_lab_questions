#include <iostream>
using namespace std;
class BinaryTree{
    int* arr;
    int size;
public:
    BinaryTree(int s){
        size = s;
        arr = new int[s];
        for(int i = 0; i < s; i++){
            arr[i] = -1;
        }
    }
    void insert(int value, int index){
        if(index >= size){
            cout << "Invalid index." << endl;
            return;
        }
        arr[index] = value;
        cout << "Inserted " << value << " at index " << index << "." << endl;
    }
    void preorder(int index){
        if(index >= size || arr[index] == -1){
            return;
        }
        cout << arr[index] << " ";
        preorder(2 * index + 1);
        preorder(2 * index + 2);
    }
    void inorder(int index){
        if(index >= size || arr[index] == -1){
            return;
        }
        inorder(2 * index + 1);
        cout << arr[index] << " ";
        inorder(2 * index + 2);
    }
    void postorder(int index){
        if(index >= size || arr[index] == -1){
            return;
        }
        postorder(2 * index + 1);
        postorder(2 * index + 2);
        cout << arr[index] << " ";
    }
    void display(){
        for(int i = 0; i < size; i++){
            if(arr[i] != -1){
                cout << arr[i] << " ";
            }
            else{
                cout << "_ ";
            }
        }
        cout << endl;
    }
};
int main(){
    BinaryTree bt(10);
    bt.insert(1, 0);
    bt.insert(2, 1);
    bt.insert(3, 3);
    bt.insert(4, 4);
    bt.insert(5, 7);
    cout << "Binary Tree elements: ";
    bt.display();
    cout << "Preorder traversal: ";
    bt.preorder(0);
    cout << "\nInorder traversal: ";
    bt.inorder(0);
    cout << "\nPostorder traversal: ";
    bt.postorder(0);
    return 0;
}