#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
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
void dfs(vector<bool>&vis,map<int,vector<int>>&mp,int node){
     vis[node]=false;
     
       for(int x:mp[node]){
        if(vis[x]){
            dfs(vis,mp,x);
            vis[x]=false;
        }
       }
     
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,m;
cin>>n>>m;
map<int,vector<int>>mp;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    mp[a].emplace_back(b);
    mp[b].emplace_back(a);
}
vector<bool> vis(n+1,true);
vector<pair<int,int>>ans;
dfs(vis,mp,1);

for(int i=2;i<=n;i++){
      if(vis[i]){
           ans.push_back({1,i});
           dfs(vis,mp,i);
      }
}
cout<<ans.size()<<"\n";
for(pair<int,int> p:ans){
    cout<<p.first<<" "<<p.second<<"\n";
}

}