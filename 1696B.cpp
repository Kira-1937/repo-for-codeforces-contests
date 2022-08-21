
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector <int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   int ans=0;
    // int interval =0,i(0);
    // while(i<n-1 && v.size()>1)
    // {
    //     if(v[i]!=0) 
    //     {
    //         if(v[i+1] !=0)
    //         {
    //             if(i+1 ==n-1) interval++;
    //             i++;
    //         }
    //         else
    //         {
    //             i++;
    //             interval++;
    //         }
    //     }
    //     else
    //     {
    //         i++;

    //     }
    // }

    // if(v.size()==1)
    // {
    //     if(v[0]!=0) cout<<1<<endl;
    //     else cout<<0<<endl;
    // }
    // else{
    //     if(interval>2)
    // {
    //     cout<<2<<endl;
    // }
    // else cout<<interval<<endl;
    // }
//     bool flag=true;
//    for(int i=1;i<n;i++){
//     if(v[i]!=0&&v[i-1]==0){
//         ans++;

//     } 
//     if(v[i]!=0){
//         flag=false;
//     }
    
//    }
   
//    if(ans>=2){
//     ans=2;
// }
// if(flag==false&&ans==0){
//     ans++;
// }
// if(v.size()==1&&v[0]!=0){
//     ans=1;
// }
// if(v.size()==1&&v[0]==0){
//     ans=0;
// }
// if(ans!=1){
//     cout<<ans<<endl;
// }
// else{
//     cout<<1<<endl;
// }
// while(v.size()>0&&v[0]==0){
//     v.erase(v.begin());
// }
// while(v.size()>0&&v[n-1]==0){
//     (v.pop_back());
// }


// for(int i=0;i<v.size();i++){
//     if(v[i]==0){
//         ans++;
//     }
// }
// cout<<ans<<" ";
// if(ans==0&&v.size()>0){
//     cout<<1<<endl;
// }
//  if(ans>0&&v.size()>0){
//     cout<<2<<endl;
// }
// if(v.size()==0)cout<<0<<endl;


// }
int main (){
    int t ;
    cin>>t;
    while(t--)
}
    
    return 0;
}