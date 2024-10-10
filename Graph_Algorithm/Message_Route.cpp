#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include<stack>
#define ll long long
void helper(){
}
void dfs(vector<bool>&vis,int i,int &dis,int &ans,map<int,vector<int>> &mp,int tar,vector<int> &vec,vector<int>&v1){
    stack<int> stk;
    stk.push(1);
    while(stk.size()>0){
        i=stk.top();
        if(i==tar){
        if(ans>dis){
            ans=dis;
            v1=vec;
        }
        return;

    }
    for(int x:mp[i]){
        if(vis[x]){
            vis[x]=false;
            dis++;
            vec.emplace_back(x);
            dfs(vis,x,dis,ans,mp,tar,vec,v1);
            vec.pop_back();
            dis--;
            vis[x]=true;
        }
    }

    }
    

    

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

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<bool>vis(n+1,true);
map<int,vector<int>>mp;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    mp[a].emplace_back(b);
    mp[b].emplace_back(a);
}
vector<int>v1;
vector<int>vec={1};
int dis=1;
int ans=1e8;
vis[1]=false;
dfs(vis,1,dis,ans,mp,n,vec,v1);
if(ans==1e8){
    cout<<"IMPOSSIBLE";
}
else{
    cout<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}

}




