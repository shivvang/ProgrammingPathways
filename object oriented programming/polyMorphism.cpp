#include<iostream>
using namespace std;

class maths{
    public:

   // function with same name but with different inputs variable and its types
    int sum(int a ,int b){
        return a+b;
    }

    int sum(int a ,int b ,int c){
        return a+b+c;
    }


    double sum(double a,double b){
        return a+b;
    }

    int sum(float a,float b){
        return a+b;
    }
};


int main(){

maths summation;
summation.sum(5,5);

    return 0;
}