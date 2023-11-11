#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long t;
string s;
cin>>s;
t=s.size();
long long mx=1;
long long temp=1;
for(int j=1;j<t;j++){
    if(s[j]==s[j-1]){
        temp++;
    }
    else{
        temp=1;
    }
    mx=max(mx,temp);


}
cout<<mx;

}