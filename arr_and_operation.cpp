using namespace std;
#include<bits/stdc++.h>
int main (){
    int t ;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
    int k;
      cin>>k;
      arr.push_back(k);
     }
     sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+(arr[n-1-k-i]/arr[n-1-i]);
    }
    for(int i=0;i<n-2*(k);i++){
        sum=sum+arr[i];
    }
    cout<<sum<<"\n";}
    return 0;
}