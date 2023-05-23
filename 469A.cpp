using namespace std;
#include<bits/stdc++.h>
int main(){
int n ;
cin>>n;
int a;
cin>>a;

set<int>s;
for(int i=0;i<a;i++){
    int x;
    cin>>x;
    s.insert(x);
}
int b;
cin>>b;
for(int i=0;i<b;i++){
    int x;
    cin>>x;
    s.insert(x);
}

if(s.size()==n){
    cout<<"I become the guy."<<endl;

}
else{
    cout<<"Oh, my keyboard!"<<endl;
}


return 0;


}