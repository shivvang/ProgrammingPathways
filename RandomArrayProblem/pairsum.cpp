#include<iostream>
#include<vector>
using namespace std;

int pairSum(int arr[],int n,int s){
    int i=0,j=1;
    vector<int> ans;
    while(i<n && j<n){
        if(arr[i]+arr[j]==s){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            }
            i++;
            j++;
        }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cin>>s;

    pairSum(arr,n,s);
}