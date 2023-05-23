#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
string s;
cin>>s;
for(int i=0;i<s.size();){
if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
{
   if(!(s[i-3]=='W'&&s[i-2]=='U'&&s[i-1]=='B')) {cout<<" ";}
    i=i+3;
}

else{
    cout<<s[i];
    i=i+1;
}


}

}
return 0;
}