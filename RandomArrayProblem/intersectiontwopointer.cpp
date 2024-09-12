#include <iostream>
#include <vector>
#include<climits>
using namespace std;
class solution{
    public:
          vector<int> findArrayIntersection(vector<int>&arr1,int n,vector<int>&arr2) {
            vector<int> ans;
            int i=0,j=0;
            while( i<n && j<n){
                if(arr1[i]=arr2[j]){
                    ans.push_back(arr1[i]);
                    i++;
                    j++;
                }
                else if(arr1[i]<arr2[j]){
                    i++;
                }
                else{
                    j++;
                }
            }

            return ans;
    }
};