
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    vector <int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

   sort(v.begin(),v.end());

long long sum=0;
sum=v[n-1]+v[n-2]-v[0]-v[1];
cout<<sum<<endl;




}

    
    
    return 0;
}