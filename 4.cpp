#include<iostream>
using namespace std;
void binary_search(int arr[], int n, int target){
  int left=0, right=n-1;
  while(left<=right){
    int mid=left+(right-left)/2; //to avoid potential overflow
    if(arr[mid]==target){
      cout<<"Element found at index: "<<mid<<endl;
      return;
    }
    else if(arr[mid]<target){
      left=mid+1;
    }
    else{
      right=mid-1;
    }
  }
  cout<<"Element not found in the array."<<endl;
}
int main(){
  int arr[100]={1,3,5,6,8,9,11,15};
  int n=8; //size of the array
  int target;
  cout<<"Enter the target value to search: ";
  cin>>target;
  binary_search(arr, n, target);
  return 0;
}
