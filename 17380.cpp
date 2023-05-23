#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v1;
for(int i=0;i<n;i++){
    int x;
   cin>>x;
   v1.push_back(x);
}
vector<int>v2;
for(int i=0;i<n;i++){
    int x;
   cin>>x;
   v2.push_back(x);
}
map<int,int>mp;
for(int i=0;i<n;i++){
    mp.insert({v1[i],v2[i]});
}
int zero=0;
for(int i=0;i<n;i++){
if(v1[i]==0){
    zero++;
}
}
cout<<zero<<endl;
long long sum=0;
if(zero>n-zero){
    int z=0;
    for(auto &it:mp){
      if(z>2*zero-n){
        sum=sum+2*(it.second);
        cout<<sum<<endl;
      }
      else {
        sum=sum+it.second;
        cout<<sum<<endl;
      }
      z++;
    }
}
else {

 int z=0;
    for(auto &it:mp){
      if(z<zero){
        int y=(it.second);
        cout<<"k1"<<endl;
       
        sum=sum+2*y;
       z++;
      }
      
      else if(z>=n-zero){
        cout<<"k2"<<endl;
        int y=(it.second);
         sum=sum+2*y;
         z++;
      }
      else  {
        cout<<"k3"<<endl;
        sum=sum+it.second;
       z++;
      }
      cout<<z<<endl;
    
    }


}


cout<<sum<<endl;












}
return 0;
}