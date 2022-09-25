
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;while(t--){
    int n;
    cin>>n;
    // vector<int>v;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    string str;
    cin>>str;
    
    string str2;
    
    for(int i=0;i<n;i++){
     if(i==0){
        int k=9-(str[i]-'0');
        str2=k+'0';
     }
     else{
     int k=9-(str[i]-'0');
        char g=k+'0';
        str2=str2+g;
     }
    }
  bool temp=true;
    for(int i=0;i<n;i++){
        if(str2[i]!='0'){
          cout<<str2[i];
          temp=false;
        }
    }
   if(temp){
    cout<<0;
   }
    cout<<endl;
}

    
    
    return 0;
}