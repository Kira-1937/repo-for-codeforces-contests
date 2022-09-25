
#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;while(t--){
    vector<char>v;
    for(int i=0;i<4;i++){
        char x;
        cin>>x;
        v.push_back(x);
    }
    set<char>s;
    s.insert(v[0]);
    s.insert(v[1]);
    s.insert(v[2]);
    s.insert(v[3]);
// for(auto &it:s){
//     cout<<it<<endl;
// }
if(s.size()==1){
    cout<<0<<endl;
}
else if(s.size()==3){
    cout<<2<<endl;
}
else if(s.size()==4){
    cout<<3<<endl;
}

else{
    sort(v.begin(),v.end());
    if(v[1]!=v[2]){
        cout<<1<<endl;
    }
    else{
        cout<<1<<endl;
    }
}


}

    
    
    return 0;
}