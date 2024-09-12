#include<iostream>
#include<vector>
using namespace std;

int main(){
int arr[4]={12,23,5,22};
int* ptr=arr;
cout<<"before"<<ptr<<endl;
ptr=ptr+2;
cout<<ptr;
cout<<&arr[2];
  return 0;
}