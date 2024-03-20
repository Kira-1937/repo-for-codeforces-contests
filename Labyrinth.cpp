#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef map<int, int> m32;
typedef map<ll, ll> m64;

double eps = 1e-12;

double pi = acos(-1);

#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#ifndef ONLINE_JUDGE

template <typename T>
void __p(T a)
{
    cerr << a;
}
template <typename T, typename F>
void __p(pair<T, F> a)
{
    cerr << "{";
    __p(a.first);
    cerr << ",";
    __p(a.second);
    cerr << "}";
}
template <typename T>
void __p(std::vector<T> a)
{
    cerr << "{";
    for (auto it = a.begin(); it < a.end(); it++)
        __p(*it), cerr << ",}"[it + 1 == a.end()];
}
template <typename T>
void __p(std::set<T> a)
{
    cerr << "{";
    for (auto it = a.begin(); it != a.end();)
    {
        __p(*it);
        cerr << ",}"[++it == a.end()];
    }
}
template <typename T>
void __p(std::multiset<T> a)
{
    cerr << "{";
    for (auto it = a.begin(); it != a.end();)
    {
        __p(*it);
        cerr << ",}"[++it == a.end()];
    }
}
template <typename T, typename F>
void __p(std::map<T, F> a)
{
    cerr << "{\n";
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        __p(it->first);
        cerr << ": ";
        __p(it->second);
        cerr << "\n";
    }
    cerr << "}\n";
}

template <typename T, typename... Arg>
void __p(T a1, Arg... a)
{
    __p(a1);
    __p(a...);
}
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << " : ";
    __p(arg1);
    cerr << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    int bracket = 0, i = 0;
    for (;; i++)
        if (names[i] == ',' && bracket == 0)
            break;
        else if (names[i] == '(')
            bracket++;
        else if (names[i] == ')')
            bracket--;
    const char *comma = names + i;
    cerr.write(names, comma - names) << " : ";
    __p(arg1);
    cerr << " | ";
    __f(comma + 1, args...);
}
#define trace(...) cerr << "Line:" << __LINE__ << " ", __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...)
#define error(...)
#endif

mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define SHUF(v) shuffle(all(v), RNG);

#define cz(it) cout << "Case #" << it << ":" << '\n'
#define int ll
// print gcd of a,b
int gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// check the number is prime or not
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

const int mod = 1e9 + 7;
// 128 bit: __int128

// inverse or mod
inline int add(int a, int b)
{
    a += b;
    if (a >= mod)
        a -= mod;
    return a;
}
inline int sub(int a, int b)
{
    a -= b;
    if (a < 0)
        a += mod;
    return a;
}
inline int mul(int a, int b) { return (a * 1ll * b) % mod; }
inline int power(int a, int b)
{
    int rt = 1;
    while (b > 0)
    {
        if (b & 1)
            rt = mul(rt, a);
        a = mul(a, a);
        b >>= 1;
    }
    return rt;
}
inline int inv(int a) { return power(a, mod - 2); }
// ncr or fact
ll fact(ll n);

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
ll fact(ll n)
{
    if (n == 0)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

//  void check(string &s_final,string s,vector<string>&v,int xa,int ya,vector<vector<bool>>&vis,int &n,int &m){

//     if(v[xa][ya]=='B'){

//         if(s_final=="0"){
//             s_final=s;
//         }
//         else{
//         if(s_final.size()>s.size()){
//             s_final=s;
//         }
//         }
//          cout<<"p"<<" "<<s_final<<endl;
//         return ;
//     }
//     vis[xa][ya]=true;
// cout<<s<<" "<<endl;

//     if(xa<n-1&&v[xa+1][ya]=='.'&&vis[xa+1][ya]==false){
//     s=s+'D';
//     check(s_final,s,v,xa+1,ya,vis,n,m);
//     s.pop_back();
//     // return ;

// }
// if(xa>0&&v[xa-1][ya]=='.'&&vis[xa-1][ya]==false){
//     s=s+'U';
//     check(s_final,s,v,xa-1,ya,vis,n,m);
//     s.pop_back();
//     // return ;
// }

// if(ya<m-1&&v[xa][ya+1]=='.'&&vis[xa][ya+1]==false){
//     // cout<<xa<<" "<<ya+1<<endl;
//     s=s+'R';
//     check(s_final,s,v,xa,ya+1,vis,n,m);
//     s.pop_back();
//     // return ;

// }

// if(ya>0&&v[xa][ya-1]=='.'&&vis[xa][ya-1]==false){

//     s=s+'L';
//     check(s_final,s,v,xa,ya-1,vis,n,m);
//     s.pop_back();

// // return ;
// }

// //kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

// if(xa<n-1&&v[xa+1][ya]=='B'){
//     s=s+'D';
//     check(s_final,s,v,xa+1,ya,vis,n,m);
// }
// if(xa>0&&v[xa-1][ya]=='B'){
//     s=s+'U';
//     check(s_final,s,v,xa-1,ya,vis,n,m);
// }
// if(ya<m-1&&v[xa][ya+1]=='B'){
//     s=s+'R';
//     check(s_final,s,v,xa,ya+1,vis,n,m);

// }
// if(ya>0&&v[xa][ya-1]=='B'){
//     s=s+'L';
//     check(s_final,s,v,xa,ya-1,vis,n,m);

// }

// //kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

// return ;

//  }
void solve(int it)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << setprecision(25);
    int n, m;
    cin >> n >> m;
    vector<string> v;
    vector<bool> p(m);
    bool temp = false;
    for (int i = 0; i < m; i++)
    {
        p[i] = false;
    }
    vector<vector<bool>> vis(n, p);

    int xa = -1, ya = -1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'A')
            {
                xa = i;
                ya = j;
            }
            if (s[j] == '#')
            {
                vis[i][j] = true;
            }
            if (s[j] == 'B')
            {
                temp = true;
            }
        }
        v.push_back(s);
    }
    
    vector<char> vc1(m, 'x');
    vector<vector<char>> vc(n, vc1);

    string s_final = "0";
    string s = "";

    // lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll
    if (xa != -1 || ya != -1 || temp)
    {

        vis[xa][ya] = true;
        queue<pair<int, int>> q;
        bool temp1 = false;
        q.push({xa, ya});
        vc[xa][ya] = 'A';
        int x=-1, y=-1;
    
        while (!q.empty())
        {

             
          
            x = q.front().first;
            y = q.front().second;

            q.pop();
        
            if (v[x][y] == 'B')
            {
                temp1 = true;
                break;
            }

            if (x < n - 1 && v[x + 1][y] != '#' && vis[x + 1][y] == false)
            {
                vis[x + 1][y] = true;
                vc[x + 1][y] = 'D';
                q.push({x + 1, y});
            }
            if (x > 0 && v[x - 1][y] != '#' && vis[x - 1][y] == false)
            {
                vc[x - 1][y] = 'U';
                vis[x - 1][y] = true;
                q.push({x - 1, y});
            }

            if (y < m - 1 && v[x][y + 1] != '#' && vis[x][y + 1] == false)
            {
                vc[x][y + 1] = 'R';
                vis[x][y + 1] = true;
                q.push({x, y + 1});
            }

            if (y > 0 && v[x][y - 1] != '#' && vis[x][y - 1] == false)
            {
                vc[x][y - 1] = 'L';
                vis[x][y - 1] = true;
                q.push({x, y - 1});
            }
        }

        // trace(vc,x,y,xa,ya);
        
        if (temp1)
        {
            cout << "YES" << endl;
           
       
         vector<char>ansv;

            while (x!=xa||y!=ya){
             ansv.pb(vc[x][y]);
             if(vc[x][y]=='D'){
                x--;
             }
             else if(vc[x][y]=='U'){
                x++;
             }
             else if(vc[x][y]=='R'){
                y--;
             }
             
             
             else if(vc[x][y]=='L'){
                y++;
             }

            }
            // trace(ansv);
            reverse(ansv.begin(),ansv.end());
              cout<<ansv.size()<<endl;
            for(int i=0;i<ansv.size();i++){
                cout<<ansv[i];
            }
            
            
          
            return;
        }
    }

    // lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll

    cout << "NO" << endl;
    return;
}
signed main()
{
    fast_cin();
    // freopen ("input.txt" , "r" , stdin);
    // freopen ("output.txt", "w" , stdout);
    ll t;
    t = 1;
    for (int it = 1; it <= t; it++)
    {
        solve(it);
    }
    cerr << "time taken : " << (float)clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
    return 0;
}