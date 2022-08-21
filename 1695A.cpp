
#include<bits/stdc++.h>
using namespace std;






// int main(){

// // int t;
// // cin>>t;
// // while(t--){
// //     int n ,m;
// //     cin>>n>>m;
// //     int dp[n][m];
// //     int x=0;
// //     int y=0;
// //     long long max=-(1000000000);
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<m;j++){
// //          cin>>dp[i][j];
// //          if(dp[i][j]>max){
// //             max=dp[i][j];
// //             x=i;
// //             y=j;
// //          }
// //         }
// //     }
// //     if(x+1<n-x){
// //         x=n-x;
// //     }
// //     else{
// //         x=x+1;
// //     }
// //     if(y+1<m-y){
// //         y=m-y;
// //     }
// //     else{
// //         y++;
// //     }
// //     cout<<x*y<<endl;






// // }



//   long long int n;
// cin>>n;
// n++;
//  long long int dp[n];
// dp[0]=0;
// dp[1]=1;
// dp[2]=2;
// dp[3]=3;
// dp[4]=4;
// dp[5]=5;dp[6]=6;dp[7]=7;dp[8]=8;dp[9]=9;dp[10]=10;dp[11]=11;
// for(  long long int i=12;i<n;i++){
//  dp[i]=dp[i/2]+dp[i/3]+dp[i/4];
// }
// n--;
// cout<<dp[n];


   
   
//     return 0;
// }

// dp[]



int main()
{
    // long long t;
    // // cin>>t;
    // t=1;
    // while(t--)
    // {
    //     long long n;
    // cin>>n;
    // long long nt = n/12;
    // if(n%12==0){
    //     nt++;
    // }
    // cout<<nt+n<<endl;
    // }

  long long int n;
cin>>n;

 long long int dp[100000];
dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=3;
dp[4]=4;
dp[5]=5;dp[6]=6;dp[7]=7;dp[8]=8;dp[9]=9;dp[10]=10;dp[11]=11;
for(  long long int i=12;i<100000;i++){
 dp[i]=dp[i/2]+dp[i/3]+dp[i/4];
}

if(n>=100000){
    long long a=n/2;long long b=n/3;long long c=n/4;
    cout<<dp[a]+dp[b]+dp[c];
}
else{
    cout<<dp[n];
}

   
   
    return 0;
}