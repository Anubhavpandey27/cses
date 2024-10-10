#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long

void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>vec;
vector<vector<ll>>dp;
ll md=1e9+7;
for(int i=0;i<n;i++){
ll ele;
cin>>ele;
dp.push_back(vector<ll>(m+1,0));
if(ele!=0){
    if(i==0){
       dp[i][ele]=1;
    }
    else{
        ll temp=0;
         if(ele-1>0){
            temp+=dp[i-1][ele-1];
         }
         temp+=dp[i-1][ele];
         if(ele+1<=m){
            temp+=dp[i-1][ele+1];
         }
         temp%=md;
         dp[i][ele]=temp;
    }
    
}
else{
     if(i==0){
      for(int k=1;k<=m;k++){
        dp[i][k]=1;
      }
    }
    else{
        for(int k=1;k<=m;k++){
            ll temp=0;
         if(k-1>0){
            temp+=dp[i-1][k-1];
         }
         temp+=dp[i-1][k];
         if(k+1<=m){
            temp+=dp[i-1][k+1];
         }
         temp%=md;
         dp[i][k]=temp;

        }
        
    }
}

}
ll ans=0;
for(int i=1;i<=m;i++){
    ans+=dp[n-1][i];
}
ans%=md;
cout<<ans;



}