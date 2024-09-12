#include<iostream>
using namespace std;


void LastOccurence(string &s,char x,int i,int&ans){

if(i>=s.size()){
return;
}

if(s[i]==x){
    ans=i;
}

LastOccurence(s,x,i+1,ans);
}


void RLlastoccurence(string&s,char x,int i,int&ans){
if(i<0){
    return;
}

if(s[i]==x){
    ans=i;
    return;
}

RLlastoccurence(s,x,i-1,ans);
}

int main(){
 string s;
 cin>>s;


 char x;
cin>>x;

int i=0;

int ans=-1;

LastOccurence(s,x,i,ans);
cout<<ans;

    return 0;
}