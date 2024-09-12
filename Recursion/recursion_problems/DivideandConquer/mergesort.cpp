#include <iostream>
using namespace std;

void merge(int* arr,int s,int e){

int mid=s+e/2;

//calculating length for new arrays

int len1=mid-s+1;
int len2=e-mid;

//creating arrray dynamically
int* left = new int [len1];
int* right= new int [len2];


//copying the values in left Array

int k=s;
for(int i=0;i<len1;i++){
left[i]=arr[k];
k++;
}

//copying the values in right array
k=mid+1;
for(int i=0;i<len2;i++){
right[i]=arr[k];
k++;
}

//main merge logic
int leftkaindex=0;
int rightkaindex=0;
int mainArrayindex=s;

while(leftkaindex<len1 && rightkaindex<len2){
    if(left[leftkaindex]<right[rightkaindex]){
        arr[mainArrayindex++]=left[leftkaindex++];
    }

    else{
        arr[mainArrayindex++]=right[rightkaindex++];
    }
}

//copying the remaining element left in any of the the array

while (leftkaindex<len1)
{
   arr[mainArrayindex++]=left[leftkaindex++];
}

//copying the remaining element in right array
while (rightkaindex<len2)
{
    arr[mainArrayindex++]=left[rightkaindex++];
}


}

void mergeSort(int* arr,int s,int e){
//base case
if(s>=e){
    return;
}

int mid=s+e/2;

// call for the left part of Array
mergeSort(arr,s,mid);

// call for the right part of array
mergeSort(arr,mid+1,e);

merge(arr,s,e);

}

int main(){

    int arr[]={7,3,2,16,24,4,11,9};
    int n=8;

    //stuff to send before call
    int e=n-1;
    int s=0;
    mergeSort(arr,s,e);

for (int  i = 0; i <n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}