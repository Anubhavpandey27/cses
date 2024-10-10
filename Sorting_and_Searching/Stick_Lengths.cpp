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
int n;
cin>>n;
vector<ll>vec;
for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    vec.emplace_back(a);

}
sort(vec.begin(),vec.end());
ll ans=0;
if(n&1){
    ll temp=vec[n/2];
    for(int i=0;i<n;i++){
        ans+=abs(temp-vec[i]);
    }
}
else{
    ll temp=(vec[n/2]+vec[(n-1)/2])/2;
     for(int i=0;i<n;i++){
        ans+=abs(temp-vec[i]);
    }
}
cout<<ans;

}