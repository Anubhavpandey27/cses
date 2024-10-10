#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n,m,k;
cin>>n>>m>>k;
vector<ll> vec1;
vector<ll> vec2;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec1.emplace_back(ele);
}
for(int i=0;i<m;i++){
    ll ele;
    cin>>ele;
    vec2.emplace_back(ele);
}
sort(vec1.begin(),vec1.end());
sort(vec2.begin(),vec2.end());
int i=0;
int j=0;
int ans=0;
while(i<n && j<m){
   if(vec2[j]+k<vec1[i]){
    j++;
   }
   else if(vec2[j]-k>vec1[i]){
         i++;

   }
   else{
    ans++;
    i++;
    j++;

   }


}
cout<<ans;


}