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
string s;
cin>>s;
vector<int> vec(26,0);
for(int i=0;i<s.size();i++){
    vec[s[i]-'A']++;
}
string ans;
int od=0;
char temp='z';


for(int i=0;i<26;i++){
    if(vec[i]&1){
        temp=char('A'+i);
        od++;
        vec[i]--;
    }
    for(int k=0;k<vec[i]/2;k++){
        ans.push_back(char('A'+i));
       
    }
 vec[i]/=2;

}
if(od>=1){
    ans.push_back(temp);
}

if(od<=1){
    for(int i=25;i>=0;i--){
    
    for(int k=0;k<vec[i];k++){
        ans.push_back(char('A'+i));
    }


}
for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}

}
else{
    cout<<"NO SOLUTION";
}

}