#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long 

ll helper(ll x,vector<ll> &coin,vector<ll> &dp){
    ll ans=0;
    if(x==0){
        return 1;
    }
    else if(x<0){
        return 0;
    }
    else{
        for(ll i=0;i<coin.size();i++){
            if(x-coin[i]>=0){
            if(dp[x-coin[i]]==-1){
                dp[x-coin[i]]=helper(x-coin[i],coin,dp);
            }
            ans+=dp[x-coin[i]];
            }

        }
        
    }
    dp[x]=ans;
    return ans;

}

int main(){
ll t,x;
cin>>t>>x;
vector<ll> coin;
for(ll j=0;j<t;j++){
    ll ele;
    cin>>ele;
    coin.emplace_back(ele);

}
vector<ll>dp(x+1,-1);
dp[0]=1;
ll answer=helper(x,coin,dp);
cout<<answer;   

}