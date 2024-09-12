#include<iostream>
using namespace std;

void ReversingString(string &s,int i){
    if(i>=s.size()){
        return;
    }

    ReversingString(s,i+1);

    cout<<s[i];
}


int main(){
string s="shivang";

int i=0;

ReversingString(s,i);

    return 0;
}