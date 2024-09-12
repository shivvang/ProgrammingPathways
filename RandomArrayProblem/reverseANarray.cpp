#include<iostream>
using namespace std;


int revresingAnArray(int arr[] ,int n){
    int i=0;
    int e=n-1;

    while(i<e){
        int temp=arr[e];
        arr[e]=arr[i];
        arr[i]=temp;
        i++;
        e--;
    }
    return 0;
}

void printArray(int arr[],int n){
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

    revresingAnArray(arr,n);
    printArray(arr,n);
}