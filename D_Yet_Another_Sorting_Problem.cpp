
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector <int> v;
    vector <int >v2;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    v2=v;
    sort(v.begin(),v.end());
    int k=0;
    for (int i=0;i<n;i++){
        if (v[i]!=v2[i]){
            k++;
        }
    }

    if((k%3)==2)
{
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
}


}

    
    
    return 0;
}