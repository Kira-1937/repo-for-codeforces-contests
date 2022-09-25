
#include<bits/stdc++.h>
using namespace std;
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
vector<int>v1;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v1.push_back(x);
}
int max=n-1;
int min=0;
for(int i=0;i<n;){
    if(v1[min]-v[i]>=v[0]){
        cout<<v1[min]-v[i]<<" ";
        
    }
    else{
        min++;
       i--;
    }
    i++;
}
cout<<endl;
for(int i=0;i<n;){
    if(v1[max]-v[i]<=v[n-]){
        cout<<v1[max]-v[i]<<" ";
        
    }
    else{
        max--;
       i--;
    }
    i++;
}
cout<<endl;

}

    
    
    return 0;
}