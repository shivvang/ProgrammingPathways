#include<iostream>
#include<math.h>
using namespace std;

int main(){

int n;
cin>>n;
int sum=0;
int orignaln=n;
while(n>0){
    int lastdigit=n%10;
    sum+=pow(lastdigit,3);
    n=n/10;
}
cout<<sum<<endl;
if(sum==orignaln){
    cout<<"yes ";
}
else{
    cout<<"no its not";
}
    return 0;
}