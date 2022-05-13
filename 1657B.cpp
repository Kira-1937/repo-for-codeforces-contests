
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  long long n,b,x,y;
  cin>>n>>b>>x>>y;
  long long sum=0;
  long long  l=0;
  for(long long  i=0;i<=n;i++)
  { 
    if(l<=b)
    {
     sum=sum+l;
     
    }  
    else{
        l=l-x-y;
        sum=sum+l;
    }
   l=l+x;
  }
cout<<sum<<endl;

}

    
    
    return 0;
}