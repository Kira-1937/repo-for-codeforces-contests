
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n;
cin>>n;
vector<int> v;
int max=0;
for(int i=0; i<26; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    

}

long long ans=0;
for(int i=0;i<s.size();i++)
{  int k=s[i]-'0';
    k=k-49;
    
    ans=ans+(i+1)*v[k];
   // cout<<ans<<endl;
    
}  
  

for(int i=0;i<26;i++){
    //cout<<v[i]<<" ";
    if(max<v[i]){
        max=v[i];
    }
}
// cout<<max<<endl;
int p=s.size();
long long z=(n)*(2*p+1+n);
z=z/2;

ans=ans+(z*(max));
    cout<<ans;
    return 0;
}