#include<iostream>
#include<vector>
using namespace std;


void printSolution(vector<vector<char>>&board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}


//is Safe checking whether placing queen is right or not
bool isSafe(int row,int col,vector<vector<char>>&board,int n){
    //column wise check
    int i=row;
    int j=col;
    while(j>=0){
        if(board[i][j]='Q'){
            return false;
        }
        i--;
    }

    //diagonally upward check
     i=row;
     j=col;
    while(i>=0&&j>=0){
        if(board[i][j]='Q'){
            return false;
        }
        i--;
        j--;
    }

    //diagonally downward check
     i=row;
     j=col;
    while(i<n&&j>=0){
         if(board[i][j]='Q'){
            return false;
        }
        i++;
        j--;
    }


    //kahi pe bhi nahi queen mili

    return true;
}

void solve(vector<vector<char>>&board,int col,int n){
    // base case 
    if(col>=n){
        printSolution(board,n);
        return ;
    }

    //1 case solve karle baki recursion sambhal lega
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            //placing the queen
            board[row][col]='Q';

            //recursive for placing of adjacent column queen
            solve(board,col+1,n);
            //backtracking

             board[row][col]='-';
        }
    }
}

int main(){
int n=4;
vector<vector<char>>board(n,vector<char>(n,'-'));
int col=0;

solve(board,col,n);
    return 0;
}