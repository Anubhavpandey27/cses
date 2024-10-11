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
bool test =true;
vector<int>vec(n+1,-1);

for(int i=1;i<n;i++){

    if(vec[i]==-1){
        queue<int>q;
         q.push(i);
         vec[i]=1;
         while(q.size()>0){
            int a=q.front();
            q.pop();
            for(int j=0;j<mp[a].size();j++){
                if(vec[mp[a][j]]==-1){
                    if(vec[a]==1){
                        vec[mp[a][j]]=2;
                    }
                    else{
                        vec[mp[a][j]]=1;
                    }
                    q.push(mp[a][j]);
                }else{
                    if(vec[a]==vec[mp[a][j]]){
                        test =false;
                        break;
                    }
                }

            }
         }
    }
    if(!test){
        break;
    }
    

}
if(test){
    for(int i=1;i<=n;i++){
        cout<<vec[i]<<" ";
    }
}
else{
    cout<<"IMPOSSIBLE";
}



}