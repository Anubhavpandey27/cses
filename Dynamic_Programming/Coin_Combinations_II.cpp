#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

#define ll long long
const int md=1e9+7;
int solve(vector<int>&vec,int n,int x){
  vector<int> dp_nxt(x+1,0);
  dp_nxt[0]=1;
for(int i=n-1;i>=0;i--){
  vector<int>dp_curr(x+1,0);
  dp_curr[0]=1;
  for(int j=1;j<=x;j++){
    int temp=0;
    
    int temp1=dp_nxt[j];
    if(vec[i]<=j){
temp=dp_curr[j-vec[i]];
    }
    
    
    dp_curr[j]=(temp+temp1)%md;
    
  }
  dp_nxt=dp_curr;
}
return dp_nxt[x];
}
// int helper(vector<vector<int>>&dp,int i,int x,vector<int>&vec){
   
//   if(x<0){
//     return 0;
//   }
//   if(x==0){
//     return 1;
//   }
//   if(i>=vec.size()){
//     return 0;
//   }
 
//   if(dp[i][x]!=-1){
//        return dp[i][x];
//   }
//   int temp=0;
  
//      temp+=(helper(dp,i+1,x,vec)%md);
   
//      temp+=(helper(dp,i,x-vec[i],vec)%md);
//     temp%=md;
     
  
//   dp[i][x]=temp;
   

//   return dp[i][x];
//   }


int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,x;
cin>>n>>x;



vector<int> vec;
for(int i=0;i<n;i++){
  int ele;
  cin>>ele;
  vec.emplace_back(ele);
}

cout<<solve(vec,n,x);

}