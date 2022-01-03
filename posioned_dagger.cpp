using namespace std;
#include<iostream>
int main (){
    int attack,health;
    cin>>attack>>health;
    int arr[attack];
    for(int i=0;i<attack;i++){
    cin>>arr[i]; }
    int ar[attack-1];
    for (int i=0;i<attack-1;i++){
    ar[i]=arr[i+1]-arr[i];}
    int num2=attack;
    for(int i=0;i<attack-1;i++){
    if(ar[i]<((health)/(attack))){
    health=health-ar[i];
    num2--; }}
    cout<<(health)/num2;
    }