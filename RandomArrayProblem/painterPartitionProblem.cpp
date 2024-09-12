#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
    int paintercount=1;
    int boardSum=0;
    for(int i=0;i<n;i++){
        if(boardSum+arr[i]<=mid){
            boardSum+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>k||arr[i]>mid){
                return false;
            }
            boardSum=arr[i];
        }
    }
    return true;     
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int k=2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){

        }
    }
}