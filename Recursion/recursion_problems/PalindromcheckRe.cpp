#include<iostream>
using namespace std;

bool palindromeRe(string &s,int start ,int end){
    //base case
    if(start>=end){
        return true;
    }

    //ek case solve karle
    if(s[start]!=s[end]){
        return false;
    }

    //baki recursion sambhal lega
    palindromeRe(s,start+1,end-1);
}

int main(){

string s="lolo";
int start =0;

int end=s.size()-1;

cout<<palindromeRe(s,start,end)<<endl;

    return 0;
}