
#include<bits/stdc++.h>
using namespace std;
bool compare(char a,char b)
{
    if(a=='b'&&b=='c')
    {
        return false;
    }
    else if(a=='c'&&b=='b')
    {
        return true;
    }
    else
    {
        return a < b;
    }
}
int main(){
int t ;
cin>>t ;
while (t--){
    string s,r;
    cin>>s>>r;
    int n =s.size();
    int l=0;
    for(int i=0;i<n;i++ ){
        if(s[i]=='a'){
            l++;
        }
    }

    if(l>0){ 
   if(r=="abc"){
        sort(s.begin(),s.end(),compare);
        cout<<s<<"\n";

   }
   else{
       sort(s.begin(),s.end());
       cout<<s<<"\n";
   }}
   else{
       sort(s.begin(),s.end());
       cout<<s<<"\n";
   }

}

    
    
    return 0;
}