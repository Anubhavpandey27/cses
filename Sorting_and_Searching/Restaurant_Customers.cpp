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
ll n;
cin>>n;
vector<ll> entry;
vector<ll>exit;
for(int i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    entry.emplace_back(a);
    exit.emplace_back(b);
}
sort(exit.begin(),exit.end());
sort(entry.begin(),entry.end());
ll in =0;
ll out=0;
ll ans=0;
for(int i=0;i<n;i++){
    ll temp=entry[i];
    in++;

    while(out<n){
        if(exit[out]<=temp){
            out++;
        }
        else{
            break;
        }
    }
    ans=max(ans,in-out);

}
cout<<ans;
}