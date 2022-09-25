
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;

vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=1;i<n;i++){
    v[i]=v[i-1]+v[i];
}
    int q;
    cin>>q;
    
for(int i=0;i<q;i++){
    int x;
    cin>>x;
    int high=n;
    int low=-1;
    while(high-low>1){
        int mid=(high+low)/2;
       if(x>v[mid]){
        low=mid;
       }
       else{
        high=mid;
       }
    }
    cout<<high+1<<endl;
}




    return 0;
}