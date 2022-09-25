
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
long long sum=0;
bool temp1=false;
for(int i=n-1;i>=0;i--){
   if(i>=0){
    if(v[i]>=v[i-1]&&i-1>0){
       sum=sum+v[i];
        //cout<<i<<endl;
       i--;
       // cout<<sum<<" "<<v[i+1]<<endl;
    }
    else if(i-1<0){
        sum=sum+v[i];
        // cout<<i<<endl;
        // cout<<sum<<" "<<v[i]<<endl;
    }
   
    
    else{
        if(v[i-1]>=v[i]+v[i-2]&&i-2>=0){
            sum=sum+v[i-1];
            i=i-2;
        }
        else if(i-2<0&&v[i-1]>v[i]){
            sum=sum+v[i-1];
            i=i-1;
        }
        else if(v[i-1]<v[i]+v[i-2]&&i-2>=0) {
              sum=sum+v[i];
              temp1=true;
              i=i-1;
        }
    }
   }
   //cout<<sum<<" "<<i<<endl;
}
long long sum2=0;
bool temp2=false;
for(int i=0;i<n;i++){
  if(i<n){
    if(v[i]>=v[i+1]&&i+1<n-1){
       sum2=sum2+v[i];
       i++;
    }
    else if(i+1>n-1){
        sum2=sum2+v[i];
    } 
    else{
        if(v[i+1]>=v[i]+v[i+2]&&i+2<=n-1)
           { sum2=sum2+v[i+1];
            i=i+2;}
        
        else if(i+2>n-1&&v[i+1]>v[i]){
            sum2=sum2+v[i+1];
            i=i+1;
        }
        else if(v[i+1]<v[i]+v[i+2]&&i+2<=n-1) {
              sum2=sum2+v[i];
              temp2=true;
              i++;
        }
    }
   }
}

cout<<sum+2*(abs(sum-sum2));

cout<<sum;

 
    return 0;
}