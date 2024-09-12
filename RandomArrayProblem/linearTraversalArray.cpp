#include<iostream>
using namespace std;

void printArray(int a[],int n){
if(n==0) return;

cout<<*a<<" ";

printArray(a+1,n-1);
}


int main(){

int arr[]={1,3,5,5,2,4};
int  n=sizeof(arr);
printArray(arr,n);
    return 0;
}