#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef map<int,int> m32;
typedef map<ll,ll> m64;
 
 
double eps = 1e-12;
 
double pi = acos(-1);
 
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#ifndef ONLINE_JUDGE
 
template<typename T>
void __p(T a) {
    cerr<<a;
}
template<typename T, typename F>
void __p(pair<T, F> a) {
    cerr<<"{";
    __p(a.first);
    cerr<<",";
    __p(a.second);
    cerr<<"}";
}
template<typename T>
void __p(std::vector<T> a) {
    cerr<<"{";
    for(auto it=a.begin(); it<a.end(); it++)
        __p(*it),cerr<<",}"[it+1==a.end()];
}
template<typename T>
void __p(std::set<T> a) {
    cerr<<"{";
    for(auto it=a.begin(); it!=a.end();){
        __p(*it);
        cerr<<",}"[++it==a.end()];
    }
 
}
template<typename T>
void __p(std::multiset<T> a) {
    cerr<<"{";
    for(auto it=a.begin(); it!=a.end();){
        __p(*it);
        cerr<<",}"[++it==a.end()];
    }
}
template<typename T, typename F>
void __p(std::map<T,F> a) {
    cerr<<"{\n";
    for(auto it=a.begin(); it!=a.end();++it)
    {
        __p(it->first);
        cerr << ": ";
        __p(it->second);
        cerr<<"\n";
    }
    cerr << "}\n";
}
 
template<typename T, typename ...Arg>
void __p(T a1, Arg ...a) {
    __p(a1);
    __p(a...);
}
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cerr<<name<<" : ";
    __p(arg1);
    cerr<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
    int bracket=0,i=0;
    for(;; i++)
        if(names[i]==','&&bracket==0)
            break;
        else if(names[i]=='(')
            bracket++;
        else if(names[i]==')')
            bracket--;
    const char *comma=names+i;
    cerr.write(names,comma-names)<<" : ";
    __p(arg1);
    cerr<<" | ";
    __f(comma+1,args...);
}
#define trace(...) cerr<<"Line:"<<__LINE__<<" ", __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...)
#define error(...)
#endif
 
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define SHUF(v) shuffle(all(v), RNG);
 
#define cz(it) cout << "Case #" << it  <<":" << '\n'
#define int ll
//print gcd of a,b 
int gcd(ll a, ll b)
{   
     return b == 0 ? a : gcd(b, a % b);   
}


//check the number is prime or not
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
void solve(int it)
{
	int n ,s;
    cin>>n>>s;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.pb(x);
    }

    int v[n][2];
    v[0][0]=0;
    v[0][1]=v1[0];
    for(int i=1;i<n-1;i++){
        if(s>v1[i]){
            v[i][0]=0;
            v[i][1]=v1[i];
        }
        else {
            // v[i][0]=min(s,v[i]-s);
            // v[i][1]=max(s,v[i]-s);
            if(s>=v1[i]-s){
                v[i][1]=s;
                v[i][0]=v1[i]-s;
            }
            else {
                v[i][0]=s;
                v[i][1]=v1[i]-s;
            }
        }
    }
    v[n-1][0]=v1[n-1];
    v[n-1][1]=0;


int i=1;
int j=n-2;
long long ans=0;
while(j>i+1){
    int x1=v[i-1][1]*v[i][0];
    int x2=v[i][1]*v[i-1][1];
    int x3=v[j][1]*v[j+1][0];
    int x4=v[j][0]*v[j-1][1];
    int p=min(min(x1,x2),min(x3,x4));
    if(x1==p){
        ans=ans+x1;
        i++;
    }
    else if(x2==p){
        swap(v[i][1],v[i][0]);
        ans=ans+x2;
        i++;
    }
   else if(x3==p){
    ans=ans+x3;
    j--;
   }
   else {
    ans=ans+x4;
    swap(v[j][0],v[j][1]);
    j--;
   }
}
cout<<ans<<endl;






    for(int i=0;i<n;i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }

    // bool temp=true;
    // for(int i=1;i<n-1;i++){
    //     if(v[i-1][1]*v[i][0]>v[n-i][0]*v[n-1-i][1]){
    //         break;
    //     }
    //     else if(v[i-1][1]*v[i][0]<v[n-i][0]*v[n-1-i][1]){
    //         temp=false;
    //         break;
    //     }
    // }


// for(int i=1;i<n-1;i++){
//     if(v[i-1][1]*v[i][0]+v[i][1]*v[i+1][0]>v[i][0]*v[i+1][0]+v[i-1][1]*v[i][1]){
//         swap(v[i][0],v[i][1]);
//     }
// }

//  long long ans1=0;
//     for(int i=1;i<n;i++){
//         ans1=ans1+v[i-1][1]*v[i][0];
//     }




// for(int i=n-2;i>=1;i--){
//     if(v[i-1][1]*v[i][0]+v[i][1]*v[i+1][0]>v[i][0]*v[i+1][0]+v[i-1][1]*v[i][1]){
//         swap(v[i][0],v[i][1]);
//     }
// }

//  long long ans2=0;
//     for(int i=1;i<n;i++){
//         ans2=ans2+v[i-1][1]*v[i][0];
//     }

//     cout<<min(ans1,ans2)<<endl;


// for(int i=0;i<n;i++){
//         cout<<v[i][0]<<" "<<v[i][1]<<endl;
//     }








//     trace(temp);
//   if(temp){
//     long long ans=0;
//     for(int i=1;i<n;i++){
//         ans=ans+v[i-1][1]*v[i][0];
//     }
//     cout<<ans<<endl;
//   }
//   else {
//     for(int i=1;i<n-1;i++){
//         swap(v[i][1],v[i][0]);
//     }

//  long long ans=0;
//     for(int i=1;i<n;i++){
//         ans=ans+v[i-1][1]*v[i][0];
//     }
//     cout<<ans<<endl;
// for(int i=0;i<n;i++){
//         cout<<v[i][0]<<" "<<v[i][1]<<endl;
//     }
//   }




}
signed main()
{
    fast_cin();
    // freopen ("input.txt" , "r" , stdin);
    // freopen ("output.txt", "w" , stdout);
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++)
    {
        solve(it);
    }
    cerr<<"time taken : "<<(float)clock()*1000/CLOCKS_PER_SEC<<" ms"<<endl;
    return 0;
}