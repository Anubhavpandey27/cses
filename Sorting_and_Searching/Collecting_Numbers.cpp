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
int n;
cin>>n;
vector<ll> dp(n+2,0);
vector<ll> vec;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);
}
for(int i=n-1;i>=0;i--){
    dp[vec[i]]=dp[vec[i]+1]+1;
    dp[vec[i]+1]=0;
}
ll sm=0;
for(int i=0;i<dp.size();i++){
     if(dp[i]>0){
        sm++;
     }
}
cout<<sm;

}