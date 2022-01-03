
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
int map1[n];
int map2[n];
for (int i=0;i<n;i++){
    cin>>map1[i];
}
for (int i=0;i<n;i++){
    cin>>map2[i];
}


int max=map1[0];
int index1=0;
for (int i=1;i<n;i++){
    if (map1[i]>max){
        max=map1[i];
        index1=i;
    }
}
int max2=map2[0];
int index2=0;
for (int i=1;i<n;i++){
    if (map2[i]>max2){
        max2=map2[i];
        index2=i;
    }
}
if(index1==index2){
    string s ( n,'0');
    s[index1]='1';
    cout<<s<<"\n";
}

else{
     string s(n,'1');
     cout<<s<<"\n";
}



}

    
    
    return 0;
}