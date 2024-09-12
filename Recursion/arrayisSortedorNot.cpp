#include<iostream>
#include<vector>
using namespace std;


 bool isSorted(vector<int> &v, int &n,int i){
   if(i==n-1){
    return true;
   }

   if(v[i]>v[i+1]){
    return false;
   }

   return isSorted(v,n,i+1);
}

int main(){

vector<int> v{1,2,3,5,6};

int n=v.size();

int i=0;

cout<<isSorted(v,n,i);

    return 0;
}