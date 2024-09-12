#include<iostream>
using namespace std;

 bool isAnagram(string s,string t){
    int n=t.length();
    int i=0;
    int j=i+1;
    while(i<n-1&&j<n){
        if(s!=t){
            swap(t[i],t[j]);
            i++;
            j++;
            }
        }
    }
 
int main(){
string s = "anagram",t = "nagaram";
isAnagram(s,t);
    return 0;
}