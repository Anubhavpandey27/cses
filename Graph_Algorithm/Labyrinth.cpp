#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <queue>
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
pair<int,int> a;
pair<int,int>b;
vector<string> vec;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    vec.push_back(s);

}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(vec[i][j]=='A'){
      a.first=i;
      a.second=j;
    }
     if(vec[i][j]=='B'){
      b.first=i;
      b.second=j;
    }
  }
}
queue<pair<pair<int,int>,pair<int,vector<char>>>> q;
pair<pair<int,int>,pair<int,vector<char>>>p;
p.first.first=a.first;
p.first.second=a.second;
p.second.first=0;

vec[a.first][a.second]='#';
vector<char> ans;
q.push(p);
while(q.size()>0){

  int i=q.front().first.first;
  int j=q.front().first.second;
  
  int dis=q.front().second.first;
  vector<char> s=q.front().second.second;
  if(i==b.first && j==b.second){
    ans=s;
    break;
  }
  q.pop();
  if(i!=0 && vec[i-1][j]!='#'){
    vec[i-1][j]='#';
    s.push_back('U');
    q.push({{i-1,j},{dis+1,s}});
    s.pop_back();
  }
  if(i!=n-1 && vec[i+1][j]!='#'){
    vec[i+1][j]='#';
    s.push_back('D');
    q.push({{i+1,j},{dis+1,s}});
    s.pop_back();
  }
  if(j!=m-1 && vec[i][j+1]!='#'){
    vec[i][j+1]='#';
    s.push_back('R');
    q.push({{i,j+1},{dis+1,s}});
    s.pop_back();
  }
  if(j!=0 && vec[i][j-1]!='#'){
    vec[i][j-1]='#';
    s.push_back('L');
    q.push({{i,j-1},{dis+1,s}});
    s.pop_back();
  }
}
if(ans.size()>0){
  cout<<"YES"<<"\n";
  cout<<ans.size()<<"\n";
  for(int i=0;i<ans.size();i++){
    cout<<ans[i];
  }
}
else{
  cout<<"NO";
}


}