#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
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
int find_set(int a,vector<int>&vec){
    if(vec[a]==a){
        return a;
    }
    return vec[a]=find_set(vec[a],vec);
   }
void union_sets(int a, int b,vector<int>&size) {
    a = find_set(a,size);
    b = find_set(b,size);
    if (a != b) {
        if(a > b)
          {  swap(a, b);}
        size[b] = a;
        
    }
}


int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<bool> vis(n+1,false);
set<pair<ll,pair<int,int>>>st;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    ll c;
    cin>>c;
    st.insert({c,{a,b}});

}
ll ct=0;
vector<vector<int>> vec(n+1);
vector<int> v1(n+1);
for(int i=1;i<=n;i++){
    v1[i]=i;
}
for(pair<ll,pair<int,int>> p: st){
    int a=p.second.first;
    int b=p.second.second;
    int c=p.first;
    if(find_set(a,v1)==find_set(b,v1)){

    }
    else{
        // vec[a].emplace_back(b);
        // vec[b].emplace_back(a);
        // vis[a]=true;
        // vis[b]=true;
        union_sets(a,b,v1);
        ct+=c;
    }


}
bool ans=true;
for(int i=1;i<=n;i++){
   if(find_set(i,v1)!=1){
    ans=false;
    break;
   }
}
// queue<int> q;
// q.push(1);
// vis[1]=false;
// int tab=1;

// while(q.size()>0){
//     int ft=q.front();
//     q.pop();
//     for(int i=0;i<vec[ft].size();i++){
//         if(vis[vec[ft][i]]){
//             vis[vec[ft][i]]=false;
//             tab++;
//             q.push(vec[ft][i]);
//         }
//     }

// }
if(ans){
    cout<<ct;
}
else{
    cout<<"IMPOSSIBLE";
}



}