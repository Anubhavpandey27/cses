#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
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
void solve (vector<vector<char>> &vec,int crr,set<int> &st,ll &ans){
    if(crr==8){
        ans++;
        return;
    }
    for(int i=0;i<8;i++){
        if(st.find(i)==st.end() && vec[crr][i]=='.')
        {
            st.insert(i);
            
            solve(vec,crr+1,st,ans);
           
            st.erase(i);
        }

    }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
vector<vector<char>> vec(8,vector<char>(8,'A'));
for(int i=0;i<8;i++){
    string s;
    cin>>s;
    for(int j=0;j<8;j++){
        
        vec[i][j]=s[j];

    }
}
ll ans=0;
set<int> st;
int crr=0;
solve(vec,crr,st,ans);
cout<<ans;


}   