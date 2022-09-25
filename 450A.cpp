
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;

vector <int >v1;

for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v1.push_back(x);
    
}
// sort(v2.begin(),v2.end());
// int max1=v2[n-1];
// int index_max1=0;
// int max2=v2[n-2];
// int index_max2=0;
// if(max1!=max2){
//     for(int i=n-1;i>=0;i--){
//         if(max1==v1[i]){
//             index_max1=i+1;
//             break;
//         }
        
//     }
//      for(int i=n-1;i>=0;i--){
//         if(max2==v1[i]){
//             index_max2=i+1;
//             break;
//         }
        
//     }
// }
// else{
//     for(int i=n-1;i>=0;i--){
//         if(max1==v1[i]){
//             index_max1=i+1;
//         }      
//     } 
//     for(int i=index_max1-2;i>=0;i--){
//         if(max2==v1[i]){
//             index_max2=i+1;
//         } 
//     }

// }
// //cout<<max1<<" "<<max2<<endl;
// //cout<<index_max1<<" "<<index_max2<<endl;

// if(m<max1&&m<max2){
//     if(index_max1>index_max2){   
//     cout<<index_max1<<endl;
// }
// else{
//     if(v1[index_max1-1]-v1[index_max2-1]<m){
//         cout<<index_max2<<endl;
//     }
//     else{
//         cout<<index_max1<<endl;
//     }


// }}
// else if(max1>m&&max2<m){
//     cout<<index_max1<<endl;
// }
// else{
//     cout<<n<<endl;
// }

int p=n;
while(p>1){
    for(int i=0;i<n;i++){
        if(p==1){
            break;
        }
   if(v1[i]>0){
     v1[i]=v1[i]-m;
    if(v1[i]<=0){
        p--;
        
    }
    }    
}
}
for(int i=0;i<n;i++){
    if(v1[i]>0){
        cout<<i+1<<endl;
    }
}






    
    
    return 0;
}