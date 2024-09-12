#include<iostream>
using namespace std;


int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
         int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int presentation(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);
    presentation(arr,n);
}