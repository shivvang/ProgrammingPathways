#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(11);
    d.push_front(10);

    d.empty();
    d.erase(d.begin(),d.begin()+1);

    return 0;
}