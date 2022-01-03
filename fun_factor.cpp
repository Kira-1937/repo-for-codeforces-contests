using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"0"<<"\n";
    }

    else{
        cout<<0<<" ";
        for(int k=1;k<n;k++){
            int j=0;
            for(int z=0;z<k;z++){
                if((arr[k]%arr[z])==0){
                    j++;
                }
            }
            cout<<j<<" ";
        }
    }


    return 0;

}