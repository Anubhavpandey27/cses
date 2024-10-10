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

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n;
cin>>n;
ll f=5;
ll fiv=0;
while(f<=n){
    fiv+=(n/f);
    f*=5;

}
ll ans=0;
ll tw=0;
ll t=2;
while(t<=n){
    tw+=(n/t);
    t*=2;
}

ll tt=10;
ll te=0;
while(tt<=n){
    te+=(n/tt);
    tt*=10;
}

ans+=te;
tw-=te;
fiv-=te;
ans+=min(tw,fiv);
cout<<ans;


}