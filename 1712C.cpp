
#include<bits/stdc++.h>
using namespace std;


bool good(int mid,vector<int>v){
    int temp=true;
    
for(int i=mid+1;i<v.size();i++){

    if(v[i]>=v[i-1]){
        temp=true;
        cout<<v[i-1];
        
    }
    else{
        temp=false;
        break;
    }
}


return temp;
}
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int low=0;
int high=n;

while(high-low>1){
    int mid=(high+low)/2;
    cout<<low<<" "<<high<<endl;
     if(good(mid,v)){
      
        high=mid;
     }
     else{
        low=mid;
     }
}
if(good(2,v)){
    cout<<1;
}
// cout<<high;
// int j=0;
// set<int>s;
// for(int i=0;i<high;i++){
// int j2=s.size();
// s.insert(v[i]);
// if(s.size()==j2){
//     j++;
// }
// }
// int j3=0,k=0;
// for(int i=high;i<v.size();i++){
// int j2=s.size();
// s.insert(v[i]);
// if(s.size()==j2&&v[i]!=v[i-1]){
//     k++;
//     j3=i+1;
   
// }
// }
// if(good(0,v)){
//     cout<<0<<endl;
// }
// else if(k==0){
//     cout<<high-j<<endl;
// }
// else{
// cout<<j3-k-j<<endl;
// }




}

    
    
    return 0;
}