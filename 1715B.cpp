
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
     long long dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=0;
    }


    if(b*k>s){
        cout<<-1<<endl;
    }
    else if(b==(s/k)){
        dp[n-1]=s;
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
    else{
        
        int num=0;
        bool temp=false;
        for(int i=n-1;i>=0;i--){
          s=s-(k-1);
          num++;
          if(s/k==b){
            temp=true;
              break;
          }  
        }
// cout<<num<<endl;
// cout<<s;
// cout<<temp;
          if(temp&&num<=n-1){
            dp[n-1]=s;
          for(int i=n-2;i>n-2-num;i--){
            dp[i]=k-1;
          }

           for(int i=0;i<n;i++)
            {
                cout<<dp[i]<<" ";
            }
            cout<<endl;

          }
          else{
            cout<<-1<<endl;
          }





    }





}
    
    
    return 0;
}