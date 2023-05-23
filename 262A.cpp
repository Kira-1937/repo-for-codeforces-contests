

using namespace std;
#include<bits/stdc++.h>
 
int check(int x){
    int p=0;
    while(x>0){
        if(x%10==4||x%10==7){
            p++;
        }
        x=(x-x%10)/10;
    }
    return p;
}
int main(){
    int n ,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0;i<n;i++)
     {int x;
     cin>>x;
     if(check(x)<=k){
        ans++;
     }
        
     }
     cout<<ans<<endl;
    
    
    
    
    return 0;
}
