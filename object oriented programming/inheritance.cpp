#include<iostream>
using namespace std;
  

class Animal{
  public:
  int age;
  string carnivorous;

  void eatYouAlive(){
    cout<<"yes i do have the capability of eating you alive";
  }

};

class Dog:protected Animal{
   public: void getFunction(){
    this->eatYouAlive();
   }
};

int main(){

Dog labradog;
labradog.getFunction();


    return 0;
}