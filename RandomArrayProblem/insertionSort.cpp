#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   for(int i=1;i<n;i++){
    int currentno=arr[i];
    int j=i-1;
    while(arr[j]>currentno&&j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=currentno;
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}