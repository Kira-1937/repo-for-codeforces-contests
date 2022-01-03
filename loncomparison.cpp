using namespace std;
#include<iostream>
int main(){
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int x1,p1;
        cin>>x1>>p1;
         int x2,p2;
        cin>>x2>>p2;
        if(((x1)*(10^(p1)))>((x2)*(10^(p2)))){
            cout<<">"<<endl;
        }
        else if(((x1)*(10^(p1)))==((x2)*(10^(p2)))){
            cout<<"="<<endl;
        }
   else{ 
       cout<<"<"<<endl;
   }
    }
    return 0;
}