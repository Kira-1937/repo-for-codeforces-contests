
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<int >v;
vector<int >v2;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
    v2.push_back(x);
}
sort(v.begin(),v.end());
if(v[0]==v[1]){
    cout<<"Still Rozdil";
}
else{
   for(int  i=0;i<n;i++){ 
    if(v[0]==v2[i]){
        cout<<i+1<<endl;
    }
   }
}

    
    
    return 0;
}