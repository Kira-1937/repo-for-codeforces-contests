#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n;
    cin>>m>>n;
    char arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
 
        }
    }
    int v[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='*')
            {
                v[i][j]=-1;
            }
            if(arr[i][j]=='.')
            {
                v[i][j]=0;
            }
            if(int(arr[i][j])<=56 && int(arr[i][j])>=48)
            {
                v[i][j]=int(arr[i][j])-48;
            }
 
        }
    }
    // cout<<v[0][1];
   
    bool flag=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             int sum=0;
            if(v[i][j]<=8 && v[i][j]>=0)
            {
                if(v[i-1][j]==-1 && (i-1)>=0)
                {
                    sum++;
                }
                if(v[i+1][j]==-1 && (i+1)<m)
                {
                    sum++;
                }
                if(v[i][j-1]==-1 && (j-1)>=0)
                {
                    sum++;
                }
                if(v[i][j+1]==-1 && (j+1)<n)
                {
                    sum++;
                }
                if(v[i-1][j-1]==-1 && (i-1)>=0 && (j-1)>=0)
                {
                    sum++;
                }
                if(v[i-1][j+1]==-1 && (i-1)>=0 && (j+1)<n)
                {
                    sum++;
                }
                if(v[i+1][j-1]==-1 && (i+1)<m && (j-1)>=0)
                {
                    sum++;
                }
                if(v[i+1][j+1]==-1 && (i+1)<m &&(j+1)<n)
                {
                    sum++;
                }
            //    cout<<sum<<endl;
 
            }
            
            if(v[i][j]!=sum&& v[i][j]!=-1)
            {
               flag=0;
           
             }
        }
    
    }
    if(flag==1)
    {
        cout<<" YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
 
}