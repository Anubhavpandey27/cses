#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll md=1e9+7;
ll helper(ll n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 2;
    }
    return (helper(n/2)*helper((n+1)/2))%md;
    
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
cout<<helper(n);

}