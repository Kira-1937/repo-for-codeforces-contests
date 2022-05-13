
#include<bits/stdc++.h>
using namespace std;


int count(int n )

{int dp[n+1];
dp[0]=0;
dp[1]=0;
dp[2]=2;
for(int i=3;i<n+1;i++){
    int k=log2(i);
    float j=log2(i);
    if(k==j){
        dp[i]=i-1+(log2(i));
    }
    else{
        dp[i]=i+(log2(i));
    }
}
return dp[n];



}


int main(){
int t;
cin>>t;
while(t--)
{   int n ;
cin>>n;
    vector<long long >v;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }


    sort(v.begin(),v.end());
    int k=1;int j=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
          k++;
        }
        else {
            if(k>j){
                j=k;
                k=0;
            }
        }





    }

    if(k>j){
        j=k;
    }

    
    cout<<count(n)-count(j)<<endl;




}

    
    
    return 0;
}