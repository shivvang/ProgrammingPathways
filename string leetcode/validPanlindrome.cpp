#include<iostream>
using namespace std;

bool checkPanlindrome(string s,int i,int j){

while (i<=j)
{
 if(s[i]!=s[j])
 return false;
 i++;
 j--;
}
return true;
}
int main(){
string s="abca";

int i=0;
int j=s.length()-1;
while(i<=j){
if(s[i]!=s[j]){
    return checkPanlindrome(s, i+1, j)||checkPanlindrome( s, i, j-1);
}
else{
    i++;
    j--;
}
}
return true;
return 0;
}