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

const int mod=1e9+7;
// 128 bit: __int128

//inverse or mod
inline int add(int a,int b){a+=b;if(a>=mod)a-=mod;return a;}
inline int sub(int a,int b){a-=b;if(a<0)a+=mod;return a;}
inline int mul(int a,int b){return (a*1ll*b)%mod;}
inline int power(int a,int b){int rt=1;while(b>0){if(b&1)rt=mul(rt,a);a=mul(a,a);b>>=1;}return rt;}
inline int inv(int a){return power(a,mod-2);}
 //ncr or fact
 ll fact(ll n);
 
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
ll fact(ll n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
// bool dodfs(vector<vector<int>>&ans,vector<int>&v1,int idx,vector<bool>&s,vector<vector<int>>&v,vis)
void dodfs(int idx,bool &temp,bool temp1,vector<bool>&vis,vector<bool>&s,vector<vector<int>>&u){
// trace(idx);

if(s[idx]==true){
    temp1=true;
}
// trace(idx)
if(idx==u.size()-1&&temp1){
    temp=true;
    return ;
}

//   trace(u[idx].size());
vis[idx]=true;
for(int i=0;i<u[idx].size();i++){
  
    int node=u[idx][i];
    // trace(node);
    if(vis[node]){
        if(node==u.size()-1&&temp1){
    temp=true;
    return ;
}
    }
    else {
        // trace(node);
        dodfs(node,temp,temp1,vis,s,u);
    }
}
// vis[node]
return ;



}


void solve(int it)
{ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<<setprecision(25);
	int n ,m;
    cin>>n>>m;
    vector<vector<int>>v;
    vector<int>u1;
    vector<vector<int>>u(n,u1);
    for(int i=0;i<m;i++){
        int a,b,cost;
        cin>>a>>b>>cost;
        a--,b--;
       
        vector<int>v1;
        v1.pb(a);
        v1.pb(b);
        v1.pb(cost);
        v.pb(v1);
        u[a].pb(b);
    }
// trace(v);
  vector<ll>dist(n,-1e17);
  vector<int>parent(n);
  for(int i=0;i<n;i++){
    parent[i]=i;
  }
  dist[0]=0;
   int x;
  for(int i=0;i<n;i++){
    x=-1;

    for(int j=0;j<v.size();j++){
      int a=v[j][0];
      int b=v[j][1];
      int cost=v[j][2];
      if(dist[b]<dist[a]+cost){
        x=b;
        parent[b]=a;
        dist[b]=dist[a]+cost;
      }
    }
    if(x==-1){
        break;
    }
  }


// trace(x);
  if(x==-1){
    cout<<dist[n-1]<<endl;
    return;
  }
// trace(s);
int ss=n-1;
ss=parent[n-1];
for(int i=0;i<n;i++){
    if(ss==n-1){
        cout<<-1<<endl;
        return ;
    }
    ss=parent[ss];
}

for(int i=0;i<n;i++){
    x=parent[x];
}

int cur=x;
vector<bool>s(n,false);
 for(int j=0;j<v.size();j++){
      int a=v[j][0];
      int b=v[j][1];
      int cost=v[j][2];
      if(dist[b]<dist[a]+cost){
        s[b]=true;

        dist[b]=dist[a]+cost;
      }
    }
    if(s[n-1]){
        cout<<-1<<endl;
        return ;
    }
trace(s);
vector<bool>vis(n,false);
// trace(u);/
bool temp=false;
bool temp1=false;
dodfs( 0,temp,temp1,vis,s,u);

if(temp){
    cout<<-1<<endl;
    return ;
}

cout<<dist[n-1]<<endl;




  return ;


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