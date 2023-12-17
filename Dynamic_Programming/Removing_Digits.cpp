#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll helper(ll t,vector<ll> &dp){
    if(t<=9){
        dp[t]=1;
        return 1;
    }
    ll ans=1e9;
    ll  temp=t*1;
    ll sub;
    vector<ll> vec;
    while(temp>=1){
    sub=temp%10;
    if(sub!=0){
    vec.push_back(sub);
    }
    temp=int(temp/10);
}
for(int i=0;i<vec.size();i++){
    ll su=vec[i];
    
     
    if(dp[t-su]==-1 ){
       helper((t-su),dp);
    }
    ans=min(ans,dp[t-su]);
}
dp[t]=ans+1;
return ans+1;
}

int main(){
    
ll t;
cin>>t;

vector<ll> dp(t+1,-1);
ll answer=helper(t,dp);

cout<<dp[t];
return 0;


}