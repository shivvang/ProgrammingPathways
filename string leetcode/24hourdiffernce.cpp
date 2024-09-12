#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int main(){
vector<string>timepoints;
vector<int>minutes;
for(int i=0;i<timepoints.size();i++){
string current=timepoints[i];

int hours=stoi(current.substr(0,2));
int minute=stoi(current.substr(3,2));
int total_minutes=hours*60+minute;
minutes.push_back(total_minutes);
}


//sort
sort(minutes.begin(),minutes.end());
    return 0;

    //minimum difference
    int mini=INT_MAX;
    int n=minutes.size();

    for(int i=0;i<n-1;i++){
        int diff=minutes[i+1]-minutes[i];
        mini=min(mini,diff); 

     //something missing
     int lastdiff=(minutes[0]+1440)-minutes[n-1];
     mini=min(mini ,lastdiff);

     return mini;
    }
    
}