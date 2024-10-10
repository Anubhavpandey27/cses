#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include<queue>
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
vector<int> vis(n+1,-1);
queue<int> q;
vis[1]=1;
q.push(1);
while(q.size()>0){
    int a=q.front();
    q.pop();
    for(int i=0;i<mp[a].size();i++){
        if(vis[mp[a][i]]==-1){
            vis[mp[a][i]]=a;
            q.push(mp[a][i]);

        }
    }
    if(vis[n]!=-1){
        break;
    }

}
if(vis[n]!=-1){
    int z=n;
    vector<int> ans={n};
    while(z!=1){
        ans.emplace_back(vis[z]);
        z=vis[z];

    }
    cout<<ans.size()<<"\n";
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }

}
else{
    cout<<"IMPOSSIBLE";
}





}




