#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        cout << "Pass " << i + 1 << ": ";
        for(int k = 0; k < size; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
        if(!swapped){
            break;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}