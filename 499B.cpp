
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
map<string,string>mp;

for(int i=0;i<m;i++){
    string s1,s2;
    cin>>s1>>s2;
    mp.insert({s1,s2});
   
}

vector<string>v1;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v1.push_back(s);
}

for(int i=0;i<n;i++){
    int k1=v1[i].size();
    int k2=mp[v1[i]].size();
  if(k1<=k2) {
    cout<<v1[i]<<" ";
  }
  else{
    cout<<mp[v1[i]]<<" ";
  }





}



    
    
    return 0;
}