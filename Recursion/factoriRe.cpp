#include<iostream>
using namespace std;

int factorialRe(int n){
  if(n==1){
    return 1;
  }

return n * factorialRe(n-1);

}


int main(){

int n=5;
factorialRe(n);
    return 0;
}