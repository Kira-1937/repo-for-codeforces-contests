
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    if(n<m){
        cout<<"NO\n";
    }
    else if(m==1){
        int g=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[0]){
                g=1;
                break;
            }
        }
        if(g==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

       

    }
   else{ int k=m;
    bool temp=true;
    for(int i=n-1;i>=n-m+1;i--){
        if(a[i]!=b[k-1]){
            temp=false;
          break;
        }
        else{
            k--;
        }
    }
    if(temp==false){
        cout<<"NO\n";
    }

    else{
        for(int i=0;i<=n-m-2;i++){
            if(a[i]==b[0]){
              temp=true;
              break;
            }
            else{
               temp=false; 
            }
        }
    

   if(temp==true)
{
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}}
}

}

    
    
    return 0;
}