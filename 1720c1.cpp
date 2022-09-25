#include<bits/stdc++.h>
using namespace std;
void solve(int it)
{
    int n,m;
    cin>>n>>m;
    string s;
    int a[n][m];
    int one=0;
    for(int i=0;i<n;i++) 
    {
        cin>>s;
        for(int j=0;j<m;j++)
        {
            {
                a[i][j]=s[j] - '0';
                if(a[i][j]==1) one++;
            }
        }
    } 
 
    // trace(n,m,one);
    bool flag=false;
    for(int i=0;i<n-1;i++) 
    {
        for(int j=0;j<m-1;j++)
        {
            if(a[i][j]==0 && a[i][j+1]==0)
            {
                flag=true;
                break;
            }
            if(a[i][j]==0 && a[i+1][j]==0)
            {
                flag=true;
                break;
            }
            if(a[i][j]==0 && a[i+1][j+1]==0)
            {
                flag=true;
                break;
            }
            if(a[i][j+1]==0 && a[i+1][j+1]==0)
            {
                flag=true;
                break;
            }
            if(a[i+1][j]==0 && a[i+1][j+1]==0)
            {
                flag=true;
                break;
            }
            if(a[i][j+1]==0 && a[i+1][j]==0)
            {
                flag=true;
                break;
            }
            if(a[i+1][j]==0 && a[i][j+1]==0)
            {
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }
 
    if(flag==true)
    {
        cout<<one<<'\n';
    }
    else if(one==n*m)
    {
        cout<<one-2<<'\n';
    }
    else cout<<one-1<<'\n';
}
int main()
{
    
    // freopen ("input.txt" , "r" , stdin);
    // freopen ("output.txt", "w" , stdout);
    int  t;
    cin >> t;
    for(int it=1;it<=t;it++)
    {
        solve(it);
    }
    return 0;
}
