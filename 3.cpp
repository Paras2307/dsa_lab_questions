#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int capacity, int element, int position){
    if(size >= capacity){
        cout << "Array is full." << endl;
        return;
    }
    if(position < 0 || position > size){
        cout << "Invalid position." << endl;
        return;
    }
    for(int i = size; i > position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}
void deleteElement(int arr[], int& size, int position){
    if(size <= 0){
        cout << "Array is empty." << endl;
        return;
    }
    if(position < 0 || position >= size){
        cout << "Invalid position." << endl;
        return;
    }
    for(int i = position; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}
void traverseArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    const int capacity = 100;
    int arr[capacity];
    int size = 0;

    insertElement(arr, size, capacity, 10, 0);
    insertElement(arr, size, capacity, 20, 1);
    insertElement(arr, size, capacity, 30, 1);
    cout << "Array after insertions: ";
    traverseArray(arr, size);
    deleteElement(arr, size, 1);
    cout << "Array after deletion: ";
    traverseArray(arr, size);
    return 0;
}