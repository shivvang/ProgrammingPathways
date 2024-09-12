#include<iostream>
using namespace std;
class parent{
    public:

    string eyes;
    bool have_a_six_pack;
};


class children:public parent{
    public:

    void relationship(){
        cout<<"parent idk";
    }
};


class grandChildren:public children{
     
};

int main(){

grandChildren rian;
cout<<rian.eyes;
rian.relationship();

    return 0;
}