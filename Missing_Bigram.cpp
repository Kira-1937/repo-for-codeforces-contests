// using namespace std;
// #include<bits/stdc++.h>
// int main (){
//     int t;
//     cin>>t;
// while(t--){
//       int n ;
//       cin>>n;
//       vector<string>v;
//    string s[n-1];
//       for(int i=0;i<n-2;i++){
//           string s2;
//           cin>>s2;
//           v.push_back(s2);
//       } 
//       int k=0;
//         s[0]=(v[0])[0];
// for (int i=1;i<n-2;i++){
//     if((v[i])[0]==(v[i-1])[1]){
//         s[i+k]=(v[i])[0];
//     }


//     else{
//     k++;
//         s[i]=(v[i-1])[1];
//     }

// }

// if(k==0){
//     s[n-2]=(v[n-3])[1];
//     s.push_back('a');
// }
// else if(k>0){
//     s[n-1]=(v[n-2])[1];
// }
// for(int i=0;i<n;i++){
//     cout<<s[i];
// }
// cout<<'\n';

// }


//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int d;
    cin>>d;
    
   
    while(d--)
    {
       
        
        int n ;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n-2;i++)
        {
            string x;
            cin>>x;
            
            v.push_back(x);
  

        }
        string s ;
        int  temp = 0;
       
       for(int i=0;i<n-2;i++)
       {
           string s1 = v[i];
          if(i<n-3)
          {
               string s2 =v[i+1];
          

           if(i==n-3)
           {
         
               s+=s1;
           }
           else if(s1[1]!=s2[0])
           {
               s+=s1;
               temp=1;
            //    s.push_back(s1[1]);
            //    s.push_back(s2[0]);
           }
           else{
               s.push_back(s1[0]);

           }
          }
          else s+=s1;
          
          
           
          
       }
        if(temp==0)
           {
               s.push_back('a');
           }
       cout<<s<<endl;

    }

return 0;
}