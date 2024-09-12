#include<iostream>
using namespace std;
 
 class animal{
//state //properties
private:
int weight;


 public:
 int age;
 string name; 
 
 //method
  void eat(){
  cout<<"and im eating";
 }

 void speak(){
  cout<<"yo im speaking somehow";
 }

// getter's and setter's for accesing the private state/method outside the scope

 int getWeight(){
    return weight;
 }

 int setWeight(int w){
    weight=w;
 }
 

 };


int main(){
  animal bhenchod;
  bhenchod.name="lodu";
  bhenchod.age=9;
  bhenchod.speak();

  bhenchod.setWeight(50);
  bhenchod.getWeight();
    return 0;
}