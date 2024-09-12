#include<iostream>
using namespace std;


class encapsulation
{
private:
    string browser_history;
    int body_count;
public:
     void internal_details (){
      cout<<"why would i share that";
    }

    string getBrowser_history(){
        return browser_history;
    }

    string setBrowser_history(string stuff){
        this->browser_history=stuff;
    }


};



int main(){
  
  encapsulation personal;
  personal.internal_details();

  return 0;
}