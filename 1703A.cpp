
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector <string>v(8);
    v[0]="yes";
     v[1]="Yes";
      v[2]="yEs";
       v[3]="YEs";
        v[4]="yeS";
         v[5]="yES";
          v[6]="YeS";
           v[7]="YES";
           int m=0 ;
  for(int i=0;i<8;i++){
    if(v[i]==s){
        m=1;
        cout<<"YES"<<endl;
        break;
    }
  }
  if(m==0){
    cout<<"NO"<<endl;
  }


}

    
    
    return 0;
}