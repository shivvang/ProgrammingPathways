#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cin>>s;

    int minIndex;
    int maxIndex;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==s){
                minIndex=min(i,j);
                maxIndex=max(i,j);
            }
        }
    }
    cout<<minIndex<<' '<<maxIndex;
}