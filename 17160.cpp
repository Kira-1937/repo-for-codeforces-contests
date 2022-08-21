
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
      if(a[i]==1)cout<<2<<endl;
      else if(a[i]%3==0)cout<<a[i]/3<<endl;
      else cout<<  (a[i]/3)+1<<endl;
        }
}