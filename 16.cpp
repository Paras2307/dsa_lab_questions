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
    bt.display();
    return 0;
}