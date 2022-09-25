
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int max=*max_element(v.begin(),v.end());
int min=*min_element(v.begin(),v.end());
int indexmax,indexmin;
for(int i=0;i<n;i++){
    if(max==v[i]){
        indexmax=i+1;
        break;
    }
}
for(int i=n-1;i>=0;i--){
    if(min==v[i]){
        indexmin=i+1;
        break;
    }
}
//cout<<indexmax<<" "<<indexmin<<endl;
if(indexmin<indexmax){
    cout<<n-indexmin+indexmax-2<<endl;
}
else{
    cout<<n-indexmin+indexmax-1<<endl; 
}
    
    
    return 0;
}