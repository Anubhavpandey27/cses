#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}
void solve(vector<ll> &vec,int i,ll sm, ll &ans,ll n){
    if(sm>n){
        return;
    }
    ans=max(sm,ans);
    if(i>=vec.size()){
        return;
    }
    
    ans=max(sm,ans);
    sm+=vec[i];
    solve(vec,i+1,sm,ans,n);
    sm-=vec[i];
    solve(vec,i+1,sm,ans,n);
    return;


}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n;
cin>>n;
vector<ll> vec;
ll sm=0;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    sm+=ele;
    vec.emplace_back(ele);
    

}
ll nn=sm/2;

ll ans=0;
solve(vec,0,0,ans,nn);

cout<<abs(sm-2*ans);


}