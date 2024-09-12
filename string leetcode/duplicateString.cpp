#include<iostream>
using namespace std;

int main(){

string s="abbaca";

int i=0;
int size=s.length();
string ans=" ";
while(i<size){
    if(ans.length()>0 && ans[ans.length()-1]==s[i]){
        ans.pop_back();
    }
    else{
        ans.push_back(s[i]);
    }
    i++;
}
cout<<ans;
    return 0;
}