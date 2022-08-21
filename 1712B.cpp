
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;

vector <int>v;
if(n%2==0){
    for(int i=0;i<n;i++){
if(i%2==0){
    v.push_back(i+2);
}
else{
    v.push_back(i);
}
}}
else{
 for(int i=0;i<n;i++)  { if(i==0){
        v.push_back(1);
    }
    else if(i%2==0){
        v.push_back(i);
    }
    else{
        v.push_back(i+2);
    }}
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

}

    
    
    return 0;
}