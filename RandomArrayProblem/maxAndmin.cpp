#include<iostream>
#include<climits>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int maxno=INT_MIN;
int minno=INT_MAX;
for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
        maxno=arr[i];
    }
}

for(int i=0;i<n;i++){
    if(arr[i]<minno){
        minno=arr[i];
    }
}
cout<<"the max no is"<<maxno<<endl;
cout<<"the min no is"<<minno<<endl;
    return 0;
}