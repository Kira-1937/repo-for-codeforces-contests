
#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
int num=(s.size())/2;
int one=0;
int two=0;
int three=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        one++;
    }
    if(s[i]=='2'){
        two++;
    }
    if(s[i]=='3'){
        three++;
    }
}

string s2="+";
for(int i=0;i<one;i++){
    s2=s2+"1+";
}
for(int i=0;i<two;i++){
    s2=s2+"2+";
}
for(int i=0;i<three;i++){
    s2=s2+"3+";
}
int p=s2.size();
for(int i=1;i<p-1;i++){
    cout<<s2[i];
}
// s2.erase(s2[0]);
// s2.erase(s2[s2.size()-1]);
// cout<<s2<<endl;
    
    
    return 0;
}