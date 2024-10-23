#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<map>
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
vector<int> par(n+1,-1);
map<int,vector<int>> mp;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    mp[a].emplace_back(b);
    mp[b].emplace_back(a);
}
bool test=false;
int cet=-1;
int c2=-1;
for(int i=1;i<=n;i++){
    if(par[i]==-1){
        queue<int> q;
        q.push(i);
        while(q.size()>0)
        {
            int a=q.front();
            for(int x:mp[a]){
                if(par[x]!=-1){
                    
                    test=true;
                    c2=a;
                    cet=x;
                    break;
                }
                else{
                    q.push(x);
                    par[x]=a;
                }
            }
            q.pop();
            if(test){
                break;
            }
        }

    }
    if(test){
        break;
    }
}
if(test){
    int zz=par[cet];
    int z=c2;
    vector<int> ans={cet};
    while(z!=par[cet]){
        ans.push_back(z);
        z=par[z];
    }
    ans.push_back(z);
    ans.push_back(cet);
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
else{
    cout<<"IMPOSSIBLE";
}

}