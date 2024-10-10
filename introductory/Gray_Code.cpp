#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <bitset>
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
ll pow1(ll n)
{
    ll ans=1;

for(int i=0;i<n;i++){
 ans*=2;
}
return ans;

}
void decToBinary(ll n,int m)
{
    
    
   vector<int> vec(m,0);
   
   vector<int> temp;
   while(n>0){
    temp.emplace_back((n%2));
    n/=2;
    

   }
   for(int i=0;i<temp.size();i++){
          vec[m-1-i]=temp[i];
   }
   for(int k=0;k<m;k++){
    cout<<vec[k];
   }
}


int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
long long n;
cin>>n;
ll temp=pow1(n);
int md=0;
for(ll i=0;i<temp;i+=2){
if(md%3==0){
    decToBinary(i,n);
    cout<<"\n";
    decToBinary(i+1,n);
    cout<<"\n";
     
}
else{
      decToBinary(i+1,n);
    cout<<"\n";
     decToBinary(i,n);
    cout<<"\n";

}
md++;
}


}