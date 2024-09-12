#include<iostream>
#include<array>

using namespace std;
 
int main(){
    array<int,4> a={0,1,2,3};

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
     cout<<"element at index 2"<<a.at(2)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"element at  beginnig"<<a.front()<<endl;
    cout<<"element at  end "<<a.back();
    return 0;
}