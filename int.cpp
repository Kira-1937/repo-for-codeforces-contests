using namespace std;
#include<bits/stdc++.h>
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector <int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
for(int i=1;i<n;i++){
    if(v[i]==v[i-1]){
        v[i]=(-1)*(v[i-1]);
    }
}
sort(v.begin(),v.end());
int max=0;
for(int i=1;i<n;i++){
    if(v[i]==v[i-1]){

    }
    else{
        max++;
    }
}
cout<<max<<endl;
}
return 0;

}