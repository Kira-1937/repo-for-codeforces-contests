
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    string s;
    cin>>s;

    int n;cin>>n;
    vector <int>v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]-'0');
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
     sum=sum+v[i];
    }
    
    while(sum>n){
        
        int k=*max_element(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            if(k==v[i]){
                v.erase(v.begin()+i);
            }
        }

        


    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]+'0';
    }
    cout<<endl;




}
    
    
    return 0;
}