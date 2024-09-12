#include<iostream>
using namespace std;

void Permutation(string &str,int i){
//base case
if(i>=str.length()){
    cout<<str<<" ";
    return;
}

//swapping of element
for(int j=i;j<str.length();j++){
    swap(str[i],str[j]);
    Permutation(str,i+1);
//backtracking line
    swap(str[i],str[j]);
}

}


int main(){
    string s="abc";
    int i=0;
    Permutation(s,i);
    return 0;
}