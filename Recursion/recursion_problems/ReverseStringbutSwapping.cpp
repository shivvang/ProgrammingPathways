#include<iostream>
using namespace std;

void Swapping(string&s,int start,int end){
    if(start>=end){
        return;
    }

    swap(s[start],s[end]);

    Swapping(s,start+1,end-1);

}

int main(){
string s="jignesh";

int start=0;
int end=s.size()-1;

Swapping(s,start,end);
cout<<s;
    return 0;
}