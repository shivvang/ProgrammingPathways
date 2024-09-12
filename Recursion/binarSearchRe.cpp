#include<iostream>
using namespace std;

int BinarySearchRe(int arr[],int target,int l,int h){
if(l>h){
    return -1;
}

int mid=l+(h-l)/2;

if(arr[mid]=target){
    return mid;
}

if(target>arr[mid]){
    return BinarySearchRe(arr,target,mid+1,h);
}

else{
    return BinarySearchRe(arr,target,l,mid-1);
}

}

int main(){
int arr[]={1,4,3,9,8,7};

int n=sizeof(arr);

int target=9;

int start=0;
int end=n-1;

BinarySearchRe(arr,target,start,end);
    return 0;
}