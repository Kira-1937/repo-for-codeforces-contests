
#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;

if(k%4==0){ 
    cout<<"NO\n";
}
else{
    cout<<"YES\n";
    map<long long,long long >mp;
    for(int i=1;i<=n;){
        if(k%2==1){
        mp.insert({i,i+1});
        i=i+2;
        }

        else{
            if((i+1)%4==0){
           mp.insert({i,i+1});
           i=i+2;
            }

            else{
           mp.insert({i+1,i});
           i=i+2;
            }
        }
    }

    for(auto &it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }


}



}

    
    
    return 0;
}