
#include<bits/stdc++.h>
using namespace std;
int check_devisibility(vector <int >v,int n ,int x)
{
if(x%8==0){
    cout<<"YES";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
else
{





    
}



}
int main(){
vector <char >v;
int j=0;
for(int i=0;i<100;i++){
char c;
cin>>c;
if(c!='.'){
    v.push_back(c);
    j++;
}
}
vector <int >v1;
for(int i=0;i<j;i++){
    v1.push_back(v[i]-'0');
}
int x=v1[j-1]+v1[j-2]*(10)+v1[j-3]*(100);
int n=v1.size();
cout<<check_devisibility(v1,n,x);
  
    return 0;
}