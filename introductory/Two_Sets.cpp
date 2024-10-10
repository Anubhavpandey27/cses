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
vector<ll> ans;
if((n*(n+1))%4==0){
    cout<<"YES"<<"\n";
    ll temp=(n*(n+1))/4;
    for(int i=n;i>=1;i--){
        if(temp==0){
            break;
        }
        if(temp<=n/2){
            ans.emplace_back(temp);
            break;
        }
        else{
            temp-=i;
            ans.emplace_back(i);
        }
    }
    reverse(ans.begin(),ans.end());
    int j=0;
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    cout<<n-ans.size();
     cout<<"\n";
    for(int i=1;i<=n;i++){
        if(i==ans[j]){
            j++;
        }
        else{
            cout<<i<<" ";
        }

    }

}
else{
    cout<<"NO";
}

}