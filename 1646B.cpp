
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector <long long >v;
    for (int i=0;i<n;i++){
    long long  x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[0]==v[n-1]){
       cout<<"NO\n";
   }
   else {
    long long  sum1=0;
    long long  sum2=0;
    for(int i=0;i<=n/2;i++){
    sum1=sum1+v[i];
    }
    for(int i=0;i<n;i++){
    sum2=sum2+v[i];
    }
    sum2=sum2-sum1;
    if(sum2>sum1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

   }

   }

    
    
    return 0;
}