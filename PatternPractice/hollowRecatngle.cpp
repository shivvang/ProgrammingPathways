#include<iostream>
using namespace std;

int main(){
    int row,coulmn;
    cin>>row>>coulmn;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=coulmn;j++){
            if(i==1||i==row||j==1||j==coulmn){
                cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}