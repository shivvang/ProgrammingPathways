#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n%2==0&&n%3==0)
    {
       cout<<"this  is divisible by 2 and 3"<<endl;
    }
    else if (n%2==0)
    {
       cout<<"divisible by 2"<<endl;
    }
    else{
        cout<<"divisible by 3"<<endl;
    }
    
    return 0;
}