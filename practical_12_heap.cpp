#include<iostream>
#include<string.h>
using namespace std;


class heap{
    public :
   
    void buiilmaxheap(int arr[],int n){
        for(int i = n/2-1;i>=0;i--){
            maxheapify(arr,n,i);
        }
    
    }
    
    void buildminheap(int arr[],int n){
        for(int i = n/2-1;i>=0;i--){
            minheapify(arr,n,i);
        }
    }

    void maxheapify(int arr[],int n,int i){

        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;


        if (left<n && arr[left]>arr[largest]){
            largest=left;
        }

        if (right<n && arr[right]>arr[largest]){
            largest=right;
        }


        if (largest != i){
            swap(arr[i],arr[largest]);
            maxheapify(arr,n,largest);
        }

    }

    void minheapify(int arr[],int n,int i){

        int smallest = i;
        int left = 2*i+1;
        int right = 2*i+2;


        if (arr[left]<arr[smallest]){
            smallest=left;
        }

        if (arr[right]<arr[smallest]){
            smallest=right;
        }


        if (smallest != i){
            swap(arr[i],arr[smallest]);
            minheapify(arr,n,smallest);
        }

    }


};

int main(){

    heap h;
    int n;
    int arr[20];

    cout<<"Enter Number of Students :";
    cin>>n;

    for(int i =0;i<n;i++){
        cout<<"Enter Marks for Student "<<i+1;
        cin>>arr[i];
    }
    h.buiilmaxheap(arr,n);
    cout<<"Maximum marks "<<arr[0]<<endl;

    h.buildminheap(arr,n);
    cout<<"Minimum marks "<<arr[0]<<endl;


    return 0;
}
