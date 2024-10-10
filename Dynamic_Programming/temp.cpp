#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
vector<pair<int,int>> vec(10,{0,0});//input or output
vector<int> vec1(10);//temp
for(int i=0;i<10;i++){
    int a;
    cin>>a;
    vec[i].first=a;
    vec[i].second=i;
}
sort(vec.begin(),vec.end());
for(int i=0;i<10;i++){
    vec1[vec[i].second]=log2(i);
}

map<int,int>mp;// mp[konsa element]=sorted me kaha h
for(int i=0;i<vec.size();i++){
    mp[vec1[i]]=i;
}
for(int i=0;i<vec.size();i++){
    vec[i]=log2(mp[vec[i]]);
}
vec;


}