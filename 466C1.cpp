
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<long long  > v;
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

long long k=v1[n-1];
// cout<<k<<endl;
// cout<<k%3<<endl;
if(k%3!=0||n<3){
  cout<<0<<endl;
}

else{
    long long p=k/3;
    long long q=2*p;
    long long  ans=0;
    long long  ans1=0;
    long long ans2=0;
    bool cross=false;
  if(k==0){
   for(int i=0;i<n;i++){
    if(v1[i]==0){
        ans++;
    }
   }
   ans=ans-2;
  cout<<(ans*(ans+1))/2;
    
  }

  else{
for(int i=0;i<n;i++){ 
if(v1[i]==p){
    if(ans2>0){
        cross=true;
    }
    ans1++;
}
if(v1[i]==q){
    
    ans2++;
}   
}


ans=ans1*ans2;
if(cross){
    ans--;
}
//cout<<ans1<<ans2;
cout<<ans<<endl;

}


 
}






    
    
    return 0;
}