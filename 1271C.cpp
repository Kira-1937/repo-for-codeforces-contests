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
{  int n ;
cin>>n;
int s1,s2;
cin>>s1>>s2;
int v[n][2];
for(int i=0;i<n;i++){
    cin>>v[i][0]>>v[i][1];
}

int ans[4][2];
ans[0][0]=s1-1;
ans[0][1]=s2;
ans[1][0]=s1;
ans[1][1]=s2-1;
ans[2][0]=s1+1;
ans[2][1]=s2;
ans[3][0]=s1;
ans[3][1]=s2+1;

long long sum=0;
int xx,yy;
for(int j=0;j<4;j++){
    long long p=0;
    for(int i=0;i<n;i++){
    if(abs(v[i][0]-s1)+abs(v[i][1]-s2)==abs(ans[j][0]-s1)+abs(ans[j][1]-s2)+abs(ans[j][0]-v[i][0])+abs(ans[j][1]-v[i][1])){

    p++;

    }
}

if(sum<p){
    sum=p;
    xx=ans[j][0];
    yy=ans[j][1];
}
}
cout<<sum<<endl;

cout<<xx<<" "<<yy<<endl;


	
}
signed main()
{
    fast_cin();
    // freopen ("input.txt" , "r" , stdin);
    // freopen ("output.txt", "w" , stdout);
    ll t;
    t=1;
    for(int it=1;it<=t;it++)
    {
        solve(it);
    }
    cerr<<"time taken : "<<(float)clock()*1000/CLOCKS_PER_SEC<<" ms"<<endl;
    return 0;
}