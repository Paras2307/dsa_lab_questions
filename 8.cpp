#include <iostream>
using namespace std;
int rowMajorAddress(int baseAdd,int row,int col,int i,int j,int elementSize){
    return baseAdd + elementSize * (i * col + j);
}
int colMajorAddress(int baseAdd,int row,int col,int i,int j,int elementSize){
    return baseAdd + elementSize * (j * row + i);
}
int main(){
    int baseAdd, row, col, i, j, elementSize;
    cout << "Enter base address of the array: ";
    cin >> baseAdd;
    cout << "Enter number of rows and columns: ";
    cin >> row >> col;
    cout << "Enter size of each element in bytes: ";
    cin >> elementSize;
    cout << "Enter the row and column index of the element to access: ";
    cin >> i >> j;
    int rowMajorAddr = rowMajorAddress(baseAdd, row, col, i, j, elementSize);
    int colMajorAddr = colMajorAddress(baseAdd, row, col, i, j, elementSize);
    cout << "Address of element at (" << i << ", " << j << ") using Row-Major Order: " << rowMajorAddr << endl;
    cout << "Address of element at (" << i << ", " << j << ") using Column-Major Order: " << colMajorAddr << endl;
    return 0;
}