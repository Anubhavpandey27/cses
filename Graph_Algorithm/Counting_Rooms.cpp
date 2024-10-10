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
void solve(vector<string> &vec,int i,int j,int n,int m){
    if(i>=n || j>=m ||  i<0 || j<0 || vec[i][j]=='#'){
        return;
    }
    vec[i][j]='#';
    solve(vec,i+1,j,n,m);
    solve(vec,i-1,j,n,m);
    solve(vec,i,j+1,n,m);
    solve(vec,i,j-1,n,m);
    
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<string>vec;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    vec.push_back(s);
    
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vec[i][j]!='#'){
            ans++;
            solve(vec,i,j,n,m);
        }
    }
}
cout<<ans;



}