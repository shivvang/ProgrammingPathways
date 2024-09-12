#include<iostream>
using namespace std;
int sqrt(int x){
     int s=0;
        int e=x;
        int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
         long long int square=mid*mid;
        if(square==x){
            return mid;
        }
        if(square<x){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
        }
        return ans;
    }
double moreprecision(int n,int precison,int temp_sol){
    double factor=1;
    double ans=temp_sol;
    for(int i=0;i<precison;i++){
        factor=factor/10;
          for(int j=ans;j*j<n;j=j+factor){
           ans=j;
    }
    }
}
int main(){
    int x;
    cin>>x;
    int temp_sol=sqrt(x);
    cout<<"answer is"<<moreprecision(x,3,temp_sol);
}