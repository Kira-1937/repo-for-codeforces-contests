// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// long long r,g,b;
// cin>>r>>g>>b;
// if(r<=g){
//     long long k=r;
//     r=g;
//     g=k;
// }
// if(r<=b){
//      long long k=r;
//     r=b;
//     b=k;
// }
// if(g<=b)
// { long long k=g;
//     g=b;
//     b=k;
 
// }
 
// r=r-b;
// g=g-b;
// if(g==0){
//     cout<<b<<endl;
// }
// else {
//     if(r>=2*g){
//         cout<<b+g<<endl;
//     }
//    else if(r>=g&&r<2*g&&r+g>=3){
  
  

// cout<<g/2+g%2+(r-g)/4 +b<<endl;


//    }
//     else{
//         cout<<b+r/2<<endl;
//     }
// }
    
    
//     return 0;
// }



using namespace std;
#include<bits/stdc++.h>
int main(){
long long ar[3];
cin>>ar[0]>>ar[1]>>ar[2];
sort(ar,ar+3);
if (ar[2]>ar[0]+ar[1]+ar[0]+ar[1])
 {
    ar[2]=2*(ar[0]+ar[1]);
    }
cout<<(ar[0]+ar[1]+ar[2])/3<<endl;


    return 0;
}