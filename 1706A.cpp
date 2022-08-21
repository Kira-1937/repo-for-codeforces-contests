
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ,m;
    cin>>n>>m;
    vector<int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    string s="B";
    string k="B";
    for(int i=1;i<m;i++){
     s=s+k;
    }


    for(int i=0;i<n;i++){
       int z=v[i]-1;
       if(z<m-v[i]){
        if(s[v[i]-1]=='B'){
           s[v[i]-1]='A'; 
        }
        else{
            s[m-v[i]]='A';
        }
       }
       else{
        if(s[m-v[i]]=='B'){
           s[m-v[i]]='A'; 
        }
        else{
            s[v[i]-1]='A';
        }
       }


    }


    cout<<s<<endl;
   


}

    
    
    return 0;
}