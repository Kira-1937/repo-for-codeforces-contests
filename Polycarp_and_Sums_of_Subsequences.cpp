using namespace std;
#include <bits/stdc++.h>
int main (){
    int t;
    cin>>t;
    while(t--){
    long long arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    long long a,b,c;
    a=arr[0];
    b=arr[6]-arr[4];
    c=arr[6]-a-b;
    cout<<a<<" "<<b<<" "<<c<<" \n";


    }
    return 0;
}