#include <iostream>
#include<bits/stdc++.h>
#include <deque> 
using namespace std;


void printKMax(int arr[], int n, int k){
deque<int> dq;
for (int i=0;i<n;i++){
    dq.push_back(arr[i]);
}
for (int i=0;i<n-k+1;i++){
    cout<<*max_element(dq.begin()+i,dq.begin()+(i+k))<<" ";
}
	 
   
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
        cout<<endl;
    	t--;
  	}
  	return 0;
}

