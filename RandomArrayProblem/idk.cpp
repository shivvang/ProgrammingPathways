#include<iostream>
using namespace std;

int ajacentSwapping(int arr[],int n){
  for(int i=1;i<n;i++){
    if(i%2!=0){
        int swap=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=swap;
    }
  }
}

 void printingStuff(int arr[],int n){
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

    ajacentSwapping(arr,n);
    printingStuff(arr,n);
    return 0;
}