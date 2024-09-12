#include<iostream>
using namespace std;
bool checkPalindrome(string input,int n){
int i=0;
int e=input.length();
while (i<=e)
{
   if(input[i]!=input[e]){
    return false;
   }
   i++;
   e--;
}
return true;
}
int main(){
string input="abc";
int n=input.length();
int count=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(input[i]+input[j]=checkPalindrome(input,n)){
            count++;
        }
    }
}
    return 0;
}