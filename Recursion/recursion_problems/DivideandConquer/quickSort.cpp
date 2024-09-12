#include<iostream>
using namespace std;


int partition(int arr[],int s,int e){

//selection of pivot element and its index
int pivotIndex=s;
int pivotElement=arr[pivotIndex];

// looking for appropriate position of pivot element
int count=0;

for(int i=s+1;i<=e;i++){
    if(arr[i]<pivotElement){
        count++;
    }
}

int shift=s+count;

swap(arr[pivotIndex],arr[shift]);

pivotIndex=shift;


//making sure whether elements between left to pivot index are smaller than pivot element 
//and also for ringht of pivot index whether they are greater than pivot element or not
int i=s;
int j=e;
while(i<pivotIndex&&j>pivotIndex){
 while(arr[i]<=pivotElement){
    i++;
 }
 while (arr[j]>pivotElement)
 {
    j--;
 }
 

if(i<pivotIndex&&j>pivotElement){
    swap(arr[i],arr[j]);
}
}
return pivotIndex;

}


void quickBoii(int arr[],int s,int e){
//base case
if(s>=e){
    return;
}

//partioning logic
int p=partition(arr,s,e);

//recursive calls

quickBoii(arr,s,p-1);

quickBoii(arr,p+1,e);
}

int main(){

int arr[]={8,3,4,1,20,50,30};

int n=7;

int s=0;
int e=n-1;

quickBoii(arr,s,e);
    return 0;
}