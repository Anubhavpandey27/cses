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
vec[b.first][b.second]='.';
queue<pair<int,int>> q;
pair<int,int>p;
p.first=a.first;
p.second=a.second;


vec[a.first][a.second]='A';
vector<char> ans;
bool test=false;
q.push(p);
while(q.size()>0){

  int i=q.front().first;
  int j=q.front().second;
  
  
 
  if(i==b.first && j==b.second){
    test=true;
    break;
  }
  q.pop();
  if(i!=0 && vec[i-1][j]=='.'){
    vec[i-1][j]='U';
 
    q.push({i-1,j});
    
  }
  if(i!=n-1 && vec[i+1][j]=='.'){
    vec[i+1][j]='D';
    
    q.push({i+1,j});
    
  }
  if(j!=m-1 && vec[i][j+1]=='.'){
    vec[i][j+1]='R';
    
    q.push({i,j+1});
    
  }
  if(j!=0 && vec[i][j-1]=='.'){
    vec[i][j-1]='L';
    
    q.push({i,j-1});
   
  }
}
if(test){
  cout<<"YES"<<"\n";
  int x=b.first;
  int y=b.second;
  while(vec[x][y]!='A'){
    if(vec[x][y]=='D'){
      ans.push_back('D');
      x--;

    }
    if(vec[x][y]=='U'){
      ans.push_back('U');
      x++;
    }
    if(vec[x][y]=='L'){
      ans.push_back('L');
      y++;
    }
    if(vec[x][y]=='R'){
      ans.push_back('R');
      y--;
    }
      
    

  }
  cout<<ans.size()<<"\n";
  for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i];
  }
}
else{
  cout<<"NO";
}


}