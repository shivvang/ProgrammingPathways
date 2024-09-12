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

  const int N=1e6+2;
  int minNo=INT_MAX;
  int idx[N];

  for(int i=0;i<N;i++){
    idx[i]=-1;
  }


  for(int i=0;i<n;i++){
    if(idx[arr[i]]!=-1){
        minNo=min(minNo,idx[arr[i]]);
    }

    else{
         idx[arr[i]]=i;
    }
  }
if(minNo==INT_MAX){
    cout<<-1<<endl;
}
else{
    cout<<minNo+1<<endl;
}

   return 0;
}
