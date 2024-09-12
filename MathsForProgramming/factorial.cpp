#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int factorial=1;
    for(int i=n1;i>=1;i--){
       factorial=factorial*i*(i-1);
        cout<<factorial;
    }
}