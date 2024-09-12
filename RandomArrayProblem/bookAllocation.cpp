#include<iostream>
using namespace std;


bool isPossible(int arr[],int n,int m,int mid){
    int student =1;
    int  pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            student++;
            if(student>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
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
    int m=2;
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
       if(isPossible(arr,n,m,mid)){
        ans=mid;
        e=mid-1;
       }
       else{
        s=mid+1;
       }
    int mid=s+(e-s)/2;
    }
    return ans; 
}