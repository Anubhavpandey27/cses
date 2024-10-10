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

ll n,x;
cin>>n>>x;
vector<ll>vec;
for(int i=0;i<n;i++){
     ll ele;
     cin>>ele;
     vec.emplace_back(ele);
}
sort(vec.begin(),vec.end());
int st=0;
int ed=n-1;
ll ans=0;
while(st<=ed){
    if(st==ed){
        ans++;
        break;
    }
    ans++;
    if(x>=vec[ed]+vec[st]){
        st++;
    }
    ed--;
}
cout<<ans;


}