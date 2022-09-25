
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
// map<long long  ,long long  >mp;
// for(int i=0;i<n;i++){
//     int x,y;
//     cin>>x>>y;
//     mp.insert({x,y});
// }

//long long final =0;
// for(auto &it:mp){
//     // cout<<"k";
//     if(it.first>it.second){
//         if(it.second>=final){
//             final =it.second;
//         }
//         else{
//             final=it.first;
//         }
//     }
//     else{
//         if(it.first>=final){
//             final=it.first;
//     }
//     else{
//         final=it.second;
//     }
// }
// }
// for (auto it = mp.begin(); it != mp.end(); it++){
// //cout<<"p";
//  if(it->first>it->second){
//         if(it->second>=final){
//             final =it->second;
//         }
//         else{
//             final=it->first;
//         }
//     }
//     else{
//         if(it->first>=final){
//             final=it->first;
//     }
//     else{
//         final=it->second;
//     }
// }

// }
//int k=1;
// for(auto &it:mp){
//     cout<<k<<" "<<it.first<<" "<<it.second<<endl;
//     k++;
// }
// cout<<final<<endl;
    
   set< pair<long long ,long long > > mp; 
 
 
	//read 4 values from user 
    int x,y; 
    for(int i=0; i<n; i++) 
    {    long long x,y;
        cin>>x>>y; 
        mp.insert(make_pair(x,y)); 
    }   
    

    long long final =0;
for(auto &it:mp){
     //cout<<"k";
    if(it.first>it.second){
        if(it.second>=final){
            final =it.second;
        }
        else{
            final=it.first;
        }
    }
    else{
        if(it.first>=final){
            final=it.first;
    }
    else{
        final=it.second;
    }
}
}

// int k=1;
// for(auto &it:mp){
//     cout<<k<<" "<<it.first<<" "<<it.second<<endl;
//     k++;
// }



cout<<final<<endl;
















    return 0;
}