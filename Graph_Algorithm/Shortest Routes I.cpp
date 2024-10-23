#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
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
vector<vector<pair<ll,ll>>> mp(n+1);

for(int i=0;i<m;i++){
      ll a,b,c;
      cin>>a>>b>>c;
      mp[a].push_back({b,c});
}
vector<ll> vec(n+1,1e18);
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>st;
vec[1]=0;
st.push(make_pair(0,1));
while(st.size()>0){
    pair<ll,ll> p=st.top();
     st.pop();
    if(vec[p.second]<p.first){
        continue;
    }
    for(pair<ll,ll> x:mp[p.second]){
        if(vec[x.first]>vec[p.second]+x.second){
            vec[x.first]=vec[p.second]+x.second;
            st.push({vec[x.first],x.first});
        }
    }
   
}
for(int i=1;i<=n;i++){
    cout<<vec[i]<<" ";
}

}