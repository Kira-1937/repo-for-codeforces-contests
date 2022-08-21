
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector <int >v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
int t;
cin>>t;

while(t--){
int l,r;
cin>>l>>r;

int x=-1;
int y=n;


while(y>x+1){
    int m=(x+y)/2;
   if(v[m]>l){
    y=m;
   }
   else{
    x=m;
   }

   



}










}






    
    
    return 0;
}