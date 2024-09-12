#include<iostream>
using namespace std;
  
class dad{
 public:
  bool sixpack;
  dad(){
    this->sixpack=true;
  }
};

class mom{
 public:
 string eyes;
  mom(){
    this->eyes="brown";
  }
};


class son:public dad,public mom{

};
int main(){
  son jignesh;
  cout<<jignesh.eyes;
    return 0;
}