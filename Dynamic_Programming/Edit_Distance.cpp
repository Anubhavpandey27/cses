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
string a,b;
cin>>a>>b;
int n=a.size();
int m=b.size();
vector<int > curr(n+1,0);
vector<int> prev(n+1,0);
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(a[j-1]==b[i-1]){
            curr[j]=1+prev[j-1];
        }
        else{
            curr[j]=max(prev[j],curr[j-1]);
        }
    }
    prev=curr;

}
int temp1=n-prev[n];
int temp2=m-prev[n];

int ans=abs(temp2-temp1)+min(temp1,temp2);
cout<<ans;

}



