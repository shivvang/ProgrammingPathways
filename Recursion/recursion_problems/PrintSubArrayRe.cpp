#include<iostream>
#include<vector>
using namespace std;

void subArrayUtil(vector<int>&nums,int start ,int end){
    //base case
    if(end==nums.size()){
        return;
    }


    //1 case solved

    for(int i=start;i<=end;i++){
        cout<<nums[i];
    }
    cout<<endl;

    //recursive call
    subArrayUtil(nums,start,end+1);
}

void printSubarray(vector<int>&nums){
for(int start=0;start<nums.size();start++){
    int end=start;
     subArrayUtil(nums,start,end);
}
}

int main(){
    vector<int> nums{1,2,3,4,5};
 printSubarray(nums);


    return 0;
}