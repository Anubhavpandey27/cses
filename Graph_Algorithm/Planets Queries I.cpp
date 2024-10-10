#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

#define ll long long
void helper(){
}
vector<vector<int>>dp(30,vector<int>(2e5+1,-1));
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}
int binpow(int a,int b){
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    return binpow(a,b/2)*binpow(a,(b+1)/2);
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,q;
cin>>n>>q;
vector<int> vec(n+1,0);
for(int i=1;i<=n;i++){
    int ele;
    cin>>ele;
    vec[i]=ele;
}


for(int i=1;i<=n;i++){
    dp[0][i]=vec[i];
}
for(int j=1;j<=29;j++){
    for(int i=1;i<=n;i++){
       
        dp[j][i]=dp[j-1][dp[j-1][i]];
    }
}



while(q){

    int a,b;
    cin>>a>>b;
    vector<int>v1;
    while(b>0){
        v1.emplace_back(b&1);
        b/=2;

    }
    for(int i=v1.size()-1;i>=0;i--){
        if(v1[i]==1){
            
            a=dp[i][a];

        }
            
    }
    cout<<a<<"\n";

 q--;}
 

}
