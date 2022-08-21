
#include<bits/stdc++.h>
using namespace std;
bool good(vector<long long >v2,long long q,long long mid,long long p){
return v2[mid]>p;
}


int main(){
long long t;
cin>>t;
while(t--){
long long n ;
cin>>n;
map<long long,long long>mp;
for(int i=0;i<n;i++)
{
    long long x;
    cin>>x;
    if(i+1>x)
   { mp.insert({i+1,x});}

}
// for(auto &it:mp){
//     cout<<it.first<<" "<<it.second<<endl;
// }

vector<long long>v1;
vector<long long >v2;

for(auto &it:mp){
    v1.push_back(it.first);
    v2.push_back(it.second);
}
sort(v2.begin(),v2.end());

// for(int i=0;i<v2.size();i++){
//     cout<<v1[i]<<" "<<v2[i]<<endl;
// }
// cout<<"high"<<" "<<"low\n";
long long  sum=0;
// for(long long i=0;i<v1.size();i++){
//     long long low=0;
//     long long high=v1.size();
    
//     long long p=v1[i];
//     while(high>low+1){
//         long long mid=(high+low)/2;
//         if(good(v2,v2.size(),mid,p)){
//             high=mid;
//         }
//         else{
//             low=mid;
//         }
//     }
//     //cout<<high<<" "<<low<<endl;
//     if(high<v2.size()){sum=sum-high+v2.size();}
//    else{break;}
// }

int dp[v1.size()];

for(int i=0;i<v1.size();i++){
    dp[i]==0;

}
for(int i=0;i<v1.size();i++){
    dp[v2[i]-1]++;
}




cout<<sum<<endl;





}

    
    
    return 0;
}