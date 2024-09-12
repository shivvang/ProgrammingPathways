#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i,int j,int rows,int col,int arr[3][3],vector<vector<bool>>&visited){
if(((i>=0&&i<rows))&&
  ((j>=0&&j<col))&
  ((visited[i][j]==false))){
    return true;
}
else{
    return false;
}
}


void solveMaze(int arr[3][3],int rows,int col,int i,int j,vector<vector<bool>>&visited,vector<string> path,string output){
//base case
if(i==rows-1&&j==col-1){
    path.push_back(output);
    return;
}

//down i+1 ,j
if(isSafe(i+1,j,rows,col,arr,visited)){
    visited[i+1][j]=true;
    solveMaze(arr,rows,col,i+1,j,visited,path,output+"D");
    visited[i+1][j]=false;
}
//left i j-1
if(isSafe(i,j-1,rows,col,arr,visited)){
    visited[i][j-1]=true;
    solveMaze(arr,rows,col,i+1,j,visited,path,output+"D");
    visited[i][j-1]=false;
}

//right i j+1
if(isSafe(i,j+1,rows,col,arr,visited)){
    visited[i][j+1]=true;
    solveMaze(arr,rows,col,i+1,j,visited,path,output+"D");
    visited[i][j+1]=false;
}

//up  i-1 j
}



int main(){
int maze[3][3]={{1,0,0},
              {1,1,0},
              {1,1,1}};

int rows=3;
int col=3;

vector<vector<bool>>visited(rows,vector<bool>(col,false));
visited[0][0]=true;

vector<string> path;

string output="";

solveMaze(maze,rows,col,0,0,visited,path,output);

cout<<"printing the results";
for(auto i:path){
    cout<<i<<" ";
}
cout<<endl;

    return 0;
}