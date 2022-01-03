
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int num=0;
    string ans="";
    for(int i=0; i<n-1; i++)
    {
        if(s[i]<=s[i+1])
        {
            num=i;
            break;
        }
        
    }
    for(;num<n-2 && num>0;)
    {    
        if(s[num]==s[num+1])
        {
        num++;
        }
        if(s[num]<s[num+1])
        {
            if(s[num+1]==s[num+2])
            continue;
        else break;
        }
        if(s[num]>s[num+1])
        {
        num++;
        }
    }
    
    for(int i=0; i<num+1; i++)
    {
        ans+=s[i];
    }
    for(int i=num; i>=0; i--)
    {
        ans+=s[i];
    }
cout<<ans<<'\n';
}

    
    
    return 0;
}