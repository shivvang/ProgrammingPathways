#include<iostream>
using namespace std;


void printArray(int a[],int n){
    if(n==0) return;
    cout<<*a<<" ";
    printArray(a+1,n-1);
}


int main(){

    return 0;
}