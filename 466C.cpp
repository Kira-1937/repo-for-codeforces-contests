
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
vector<int > v;
vector<long long >v1;
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  v.push_back(x);
  if(i==0){
    v1.push_back(x);
  }
  else{
    v1.push_back(v1[i-1]+x);
  }
}
long long ans =1;
long long k=v1[n-1];
if(k%3!=0){
  cout<<0<<endl;
}
else{
  long long j=k/3;
  long long l=2*j;
  for(int i=0;i<n;i++){
    if(v1[i]==j&&v[i]==0){
      ans++;
    }
    else if(v1[i]==l&&v[i]==0){
      ans++;
    }
  }
  cout<<ans<<endl;



}



    
    
    return 0;
}