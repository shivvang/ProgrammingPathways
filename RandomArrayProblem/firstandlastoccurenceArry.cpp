#include<iostream>
using namespace std;


int firstOccurenece(int arr[],int n,int key){
int fpos=0;
    int lpos=n-1;
    int mid=fpos+(lpos-fpos)/2;
    int ans;
    while(fpos<=lpos){
        if(arr[mid]==key){
            ans=mid;
            lpos=mid-1;
        }
        else if (key>arr[mid])
        {
           fpos=mid+1;
        }
        else{
            lpos=mid-1;
        }
        
        mid=fpos+(lpos-fpos)/2;
    }
    cout<<ans;
}

int lastoccurence(int arr[],int n,int key){
    int fpos=0;
    int lpos=n-1;
    int mid=fpos+(lpos-fpos)/2;
    int ans;
    while(fpos<=lpos){
        if(arr[mid]==key){
            ans=mid;
            fpos=mid+1;
        }
        else if (key>arr[mid])
        {
           fpos=mid+1;
        }
        else{
            lpos=mid-1;
        }
        
        mid=fpos+(lpos-fpos)/2;
    }
    cout<<ans;
}
int main(){
    int n,key;
    cin>>n>>key;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    firstOccurenece(arr,n,key);
    lastoccurence(arr,n,key);
}