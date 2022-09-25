
#include<bits/stdc++.h>
using namespace std;
int main(){
string s1="hello";
string s;
cin>>s;
int k=0;
for(int i=0;i<s.size();i++){
    if(s[i]==s1[k]){
        k++;
    }
}
if(k==5){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    
    
    return 0;
}