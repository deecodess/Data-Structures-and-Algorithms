#include <iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=0;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deletefromheap(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
        }
        arr[1]=arr[size];
        size=size-1;
        int i=1;
        while(i<=size){
            int left=2*i;
            int right=2*i+1;
            int max=i;
            if(left<=size && arr[left]>arr[max]){
                max=left;
            }
            if(right<=size && arr[right]>arr[max]){
                max=right;
            }
            if(max==i){
                break;
            }
            swap(arr[i],arr[max]);
            i=max;
        }
    }
};
int main(){
    heap h;
    cout<<"Enter the number of elements you want to insert in the heap: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=1;i<n;i++){
        int val;
        cin>>val;
        h.insert(val);
    }
    h.print();
}