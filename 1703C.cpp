
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int  n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
   for(int j=0;j<x;j++){
   char d;
   cin>>d;
    if(d=='D'){
          if(arr[i]==9){
             arr[i]=0;
            }
            else{
                arr[i]++;
            }
    }
    else{
         if(arr[i]==0){
             arr[i]=9;
            }
            else{
                arr[i]--;
            }
    }


   }



    //     string s;
    //     cin>>s;
      
    //   for(int j=0;j<s.size();j++){
    //     if(s[s.size()-1-j]=='U'){
    //         if(arr[i]==0){
    //          arr[i]=9;
    //         }
    //         else{
    //             arr[i]--;
    //         }
    //     }
    //     else{
    //         if(arr[i]==9){
    //          arr[i]=0;
    //         }
    //         else{
    //             arr[i]++;
    //         }
    //     }
    //   }


      




    }

for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }

}

    
    
    return 0;
}