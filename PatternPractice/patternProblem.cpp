#include<iostream>
using namespace std;

int main(){
int row,coulmn;
cin>>row>>coulmn;
for (int i=1;i<=row;i++){
    for(int j=1;j<=coulmn;j++){
        cout<<'*';
    }
    cout<<endl;
}
    return 0;
}