#include<iostream>
using namespace std;

class school{
    public:
    string physics;

    school(){
        this->physics="school wala hoon";
    }
};

class college{
    public:
    string physics;

    college(){
        this->physics="college level";
    }
};

class insaan:public school,public college{

};

int main(){

  insaan human;
  cout<<human.school::physics;

    return 0;
}