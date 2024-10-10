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
vector<ll> vec={0,0,6,28,96};
ll n;
cin>>n;
for(ll i=1;i<=n;i++){
    if(i<=4){
        cout<<vec[i];
    }
    else{
        cout<<((i*i)*(i*i-1))/2-(4*(2)+8*(3)+4*(4)+(i-4)*4*((4)+(6))+(i-4)*(i-4)*(8))/2;
    }
    cout<<"\n";
}

}