#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);

    v.push_back(2);

    v.push_back(3);

    v.push_back(4);

    cout<<"size of vector "<<v.size();
    cout<<"capacity  of vector "<<v.capacity();

    cout<<"element at specific index "<<v.at(3);

    cout<<"first element  of vector "<<v.front();
    cout<<"last element of vector "<<v.back();

    cout<<"before pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }

    v.pop_back();
    v.pop_back();

    cout<<"results after the pop";
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"before clear size and capcity"<<v.size()<<" "<<v.capacity();
    
    v.clear();

    cout<<"after clear size and capcity"<<v.size()<<" "<<v.capacity();
    return 0;
}