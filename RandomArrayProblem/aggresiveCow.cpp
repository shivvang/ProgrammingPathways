#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
    int cowCounter=1;
    int lastPosition=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-lastPosition>=mid){
            cowCounter++;
            if(cowCounter==k){
                return true;
            }
            lastPosition=arr[i];
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int s=0;
int maxi=-1;
int k=2;
for(int i=0;i<=0;i++){
    maxi=max(maxi,arr[i]);
}
int e=maxi;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(isPossible(arr,n,k,mid)){
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
   mid=s+(e-s)/2; 
}
}