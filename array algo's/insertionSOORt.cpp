#include<iostream>
using namespace std;


int InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        for(;j>0;j--){
            if(arr[j]>current){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
         arr[j+1]=current;
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,n);
    printArray(arr,n);
}