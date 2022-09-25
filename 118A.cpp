
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
{
    s[i]=tolower(s[i]);
}
for(int i=0;i<n;i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
        s.erase(s.begin()+i);
        i--;
    }
}
for(int i=0;i<s.size();i++){
    cout<<'.'<<s[i];
}
    
    
    return 0;
}