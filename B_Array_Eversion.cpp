
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--){
int n;
cin>>n;
vector<int >v;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
}



   int k=0;
   int x=v[n-1];
 for (int i=n-1;i>=0;i--){
     if(v[i]>x){
         k++;
         x=v[i];
     }

 }
 cout<<k<<"\n";



}

    
    
    return 0;
}