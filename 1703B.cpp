
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    vector <char>v;
  for(int i=0;i<n;i++){
    v.push_back(s[i]);
  }
  sort(v.begin(),v.end());

int ans=2;
  for(int i=1;i<n;i++){
    if(v[i]!=v[i-1]){
        ans=ans+2;
    }
    else{
        ans++;
    }
  }

  cout<<ans<<endl;


}

    
    
    return 0;
}