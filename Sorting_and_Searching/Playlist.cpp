#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<map>
#define ll long long
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n;
cin>>n;
vector<ll>vec=input(n);
int i=0;
int j=0;
int ans=1;
map<ll,ll> mp;
while(j<n){
mp[vec[j]]++;
if(mp[vec[j]]>1){
    while(true){
        mp[vec[i]]--;
        if(mp[vec[i]]==1){
            i++;
            break;
        }
        i++;
    }
}
ans=max(ans,j-i+1);
j++;

}
cout<<ans;



}