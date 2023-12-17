#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

long long helper(int i,int j,vector<vector<char>> &vec,vector<vector<long long>> &dp){
   long long mod=1e9+7;
    if(vec[i][j]=='*'){
        dp[i][j]=0;
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j]%mod;
    }
    long long ans=0;
    
    long long n=vec.size();
    if(j<n-1){
        if(dp[i][j+1]==-1){
            dp[i][j+1]=helper(i,j+1,vec,dp);

        }
        ans=ans+dp[i][j+1]%mod;
    }
     if(i<n-1){
        if(dp[i+1][j]==-1){
            dp[i+1][j]=helper(i+1,j,vec,dp);

        }
        ans=ans+dp[i+1][j]%mod;
    }

    ans=ans%mod;
    dp[i][j]=ans;
    return ans;
}

int main(){
int t;
cin>>t;
vector<vector<char>> vec;
vector<vector<long long>>dp(t,vector<long long>(t,-1));
dp[t-1][t-1]=1;
for(int j=0;j<t;j++){
    
    
    vector<char> v;
    for(int i=0;i<t;i++){
        
    
    char ele;
    cin>>ele;
    if(ele=='*'){
        dp[j][i]=0;
    }
    v.push_back(ele);
    }
    vec.push_back(v);

}
long long ans=helper(0,0,vec,dp);
if(vec[t-1][t-1]=='*'){
    cout<<0;
}
else{
cout<<ans;
}

}