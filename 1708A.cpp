
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int> v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
int p;
for(int i=0;i<n;i++){
    if(v[i]==0){
        p=i+1;
        break;
    }
    else{p=n;}
}
bool temp=false;
for(int i=p;i<n;i++){
if(v[i]!=0){
temp=true;
}
}

if(p!=n&&temp){
    cout<<"NO\n";
}

else{ 
  if(v[1]%v[0]==0&&v[1]!=v[0])
  {
    cout<<"YES\n";
  }
  else{
    if(v[1]==v[0]&&v[1]==1)cout<<"YES\n";
    else{
        if(v[0]==1){
            cout<<"YES\n";
        }

        else{cout<<"NO\n";}
    }
  }
}




}

    
    
    return 0;
}