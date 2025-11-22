#include<iostream>
using namespace std;
class maxheap{
    public:
    int* arr;
    int size;//current number of elements
    int total_size;//capacity

    maxheap(int n){
        total_size=n;
        size=0;
        arr=new int[n];
    }

    void insertion(int val){
        if(size==total_size){
            cout<<"Heap is full"<<endl;
            return;
        }
        arr[size]=val;
        size++;
      
    }
    void heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;

        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=index){
            swap(arr[largest],arr[index]);
            heapify(largest);
        }
    }
    void deleteHeap(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        arr[0]=arr[size-1];
        size--;
        if(size==0) return;
            heapify(0);
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    maxheap mh(5);
    mh.insertion(10);
    mh.insertion(20);
    mh.insertion(5);
    mh.insertion(30);
    mh.insertion(15);
    cout<<"Max Heap elements: ";
    mh.display();
    mh.deleteHeap();
    cout<<"After deleting max element: ";
    mh.display();    

    return 0;
}