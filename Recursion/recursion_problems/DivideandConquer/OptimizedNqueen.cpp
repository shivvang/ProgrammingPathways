#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// creation of three different maps for assurance of queen placement to be fruitful

  unordered_map<int,bool>rowCheck;
  unordered_map<int,bool>upperDiagonal;
  unordered_map<int,bool>lowerDiagonal;

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
    if(rowCheck[row]==true){
        return false;
    }

    //diagonally upward check
    if(upperDiagonal[n-1+col-row]==true){
        return false;
    }

    //diagonally downward check
    if(rowCheck[row+col]==true){
        return false;
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

            
              rowCheck[row]=true;
              upperDiagonal[n-1+row-col]=true;
              lowerDiagonal[row+col]=true;


            //recursive for placing of adjacent column queen
            solve(board,col+1,n);
            //backtracking

             board[row][col]='-';
              rowCheck[row]=false;
              upperDiagonal[n-1+row-col]=false;
              lowerDiagonal[row+col]=false;
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