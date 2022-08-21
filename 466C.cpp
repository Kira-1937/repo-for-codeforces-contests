
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
  long long  n ;
  cin>>n;
  vector<long long >v;
  for(int i=0;i<n;i++){
    long long x;
    cin>>x;
    v.push_back(x);
  }

long long sum=0;
  for(int i=0;i<n;i++)
{
    sum=sum+v[i];

}
long long ans;
if(sum%3!=0||n<=2){
    cout<<0<<endl;

}
else{
     sum=sum/3;
    //cout<<sum;
    long long  k=0;
    long long  k1=0;
    long long  k2=0;
    long long k3=0;
    long long k4=0;
   for(int i=0;i<n;i++){
    k=k+v[i];
    //cout<<k;
    if(k==sum&&sum!=0&&k2==0&&k3==0){k1++;}
    else if(k==2*sum&&sum!=0&&k1!=0){k2++;}
    else if(k==3*sum&&sum!=0&&k2!=0){k3++;}
    else if(sum==0&&k==0){k4++;}
    else{

    }
   }

  
  if(k4==0){  ans=k1*k2;
   }
   else{
    //cout<<k4;
    k4--;
    //cout<<k4;
    ans=k4*(k4-1);
    ans=ans/2;
   }
   cout<<k1<<k2<<k3<<k4<<endl;
   cout<<ans<<endl;


}





}

    
    
    return 0;
}