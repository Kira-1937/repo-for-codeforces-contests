
#include<bits/stdc++.h>
using namespace std;
 int next(int x) {
    return x + x % 10;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 5 == 0) {
            flag = true;
            a[i] = next(a[i]);
        }
    }
    if (flag) {
        cout << (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()) ? "Yes": "No") << '\n';
    } else {
        bool flag2 = false, flag12 = false;
        for (int i = 0; i < n; ++i) {
            int x = a[i];
            while (x % 10 != 2) {
                x = next(x);
            }
            if (x % 20 == 2) {
                flag2 = true;
            } else {
                flag12 = true;
            }
        }
        cout << ((flag2 & flag12) ? "No" : "Yes") << '\n';
    }
}

int main() {
    int t = 1;
    cin >> t;
    for (int it = 0; it < t; ++it) {
        solve();
    }
    return 0;
}
// int main(){
// int t;
// cin>>t;

// while(t--){
//     int n ;
// cin>>n;
// set<int> s;
// for(int i=0; i<n; i++){
//     int x;
//     cin>>x;
//     s.insert(x);
// }

// bool temp=true;
// auto it1=(s.begin());
// int q=(*it1)%10;
// auto it2=it1;
// it1++;
// if(s.size()>1&&q>0)
// {for(auto it=it1;it!=s.end();it++)
// {   int p=*it-*it2;
    
//     if(p%q!=0){
//         temp=false;
//         break;
//     }
// }
// }

// // else if(s.size()==2){
// //     int p=*it1-(*it2);
// //     if(p%q!=0){
// //         temp=false;
// //     }
// // }
// if(s.size()==1){
//     cout<<"Yes\n";
// }
// else if(temp&&q!=0){
//     cout<<"Yes"<<endl;
// }
// else{
//     cout<<"No"<<endl;
// }

// }

    
    
//     return 0;
// }