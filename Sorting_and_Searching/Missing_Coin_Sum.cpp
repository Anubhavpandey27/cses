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
vector<ll> vec;
for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    vec.emplace_back(a);
}
sort(vec.begin(),vec.end());
ll sm=0;
bool ans=true;
for(int i=0;i<n;i++){
    if(vec[i]>sm+1){
        cout<<sm+1;
        ans=false;
        break;
    }
    else{
        sm+=vec[i];
    }
    
}
if(ans)
{
    cout<<sm+1;
}

}