#include<iostream>
using namespace std;

int main(){

   int a,b;
   cin>>a>>b;

   char calc;
   cin>>calc;
    switch (calc)
    {
    case 'a':
        cout<<a+b<<endl;
        break;
    
    case 's':
        cout<<a-b<<endl;
        break;

    case 'm':
        cout<<a*b<<endl;
        break;
    
    case 'd':
        cout<<a/b<<endl;
        break;

    default:
    cout<<"cant figure out what youre trying to do"<<endl;
        break;
    }
    return 0;
}