#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<bool>Sieve(int n){
    vector<bool>isprime(n-1,true);
isprime[0]=isprime[1]==false;

for(int i=2;i<=n;i++){
    if(isprime[i]==true){
        int j=i*2;
        while(j<=n){
            isprime[j]=false;
            j+=i;
        }
    }
}
   return isprime; 
}



//segmented seieve

vector<bool> segsieve(int l,int r){
    vector<bool>sieve=Sieve(sqrt(r));
    vector<int>baseprimes;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            baseprimes.push_back(i);
        }
    }
    vector<bool>segSieve(r-l+1,true){
    if(l==1||l==0){
        segSieve[l]=false;
    }
}

for(auto prime:baseprimes){
    int first_mul=(l/prime)*prime;
    if(first_mul<l){
        first_mul+=prime;
    }
}
int j=max(first_mul,i*i);
while (j<=r)
{
   segSieve[j-l]=false;
   j+=prime;
}
return segSieve;
}


int main(){
    vector<bool>isprime=Sieve(25);

for (int i = 0; i <=25; i++)
{
 if(isprime[i]){
    cout<<i;  }
}


    return 0;
}