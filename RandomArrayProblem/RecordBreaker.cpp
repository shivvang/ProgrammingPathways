#include<climits>

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int ans=0;
int maxno=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]&arr[i]>maxno){
        ans++;
    }
    maxno=max(maxno,arr[i]);
}
cout<<ans;
    return 0;
}