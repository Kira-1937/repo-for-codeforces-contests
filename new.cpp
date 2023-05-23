/// -------------------------------Copyright @Sandeep kumar------------------------------------ ///
/// ------------------------------------OPTIMIZATIONS--------------------------------------- ///

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

/// ------------------------------------HEADER-FILES---------------------------------------- ///
#include <bits/stdc++.h>

/// ------------------------------------NAMESPACES------------------------------------------ ///
using namespace std;

/// ------------------------------------DEFINING-MYWAY-------------------------------------- ///
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
#define nl "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define pb push_back
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

/// ----------------------------------------TRACING------------------------------------- ///

#ifndef ONLINE_JUDGE

template <typename T>
void __p(T a)
{
    cout << a;
}
template <typename T, typename F>
void __p(pair<T, F> a)
{
    cout << "{";
    __p(a.first);
    cout << ",";
    __p(a.second);
    cout << "}";
}
template <typename T>
void __p(std::vector<T> a)
{
    cout << "{";
    for (auto it = a.begin(); it < a.end(); it++)
        __p(*it), cout << ",}"[it + 1 == a.end()];
}
template <typename T>
void __p(std::set<T> a)
{
    cout << "{";
    for (auto it = a.begin(); it != a.end();)
    {
        __p(*it);
        cout << ",}"[++it == a.end()];
    }
}
template <typename T>
void __p(std::multiset<T> a)
{
    cout << "{";
    for (auto it = a.begin(); it != a.end();)
    {
        __p(*it);
        cout << ",}"[++it == a.end()];
    }
}
template <typename T, typename F>
void __p(std::map<T, F> a)
{
    cout << "{\n";
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        __p(it->first);
        cout << ": ";
        __p(it->second);
        cout << "\n";
    }
    cout << "}\n";
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
    cout << name << " : ";
    __p(arg1);
    cout << endl;
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
    cout.write(names, comma - names) << " : ";
    __p(arg1);
    cout << " | ";
    __f(comma + 1, args...);
}
#define trace(...) cout << "Line:" << _LINE_ << " ", _f(#VA_ARGS, __VA_ARGS_)
#else
#define trace(...)
#define error(...)
#endif
/// ----------------------------------------- MATHS by Sandeep kumar ------------------------------------- ///
bool is_prime(ll n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
v64 prime_factor(ll n)
{

    v64 v;
    if (n <= 1)
        return v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n /= 2;
    }
    while (n % 3 == 0)
    {
        v.push_back(3);
        n /= 3;
    }
    for (ll i = 5; i <= n; i += 6)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            v.push_back(i + 2);
            n /= (i + 2);
        }
        if (n > 3)
        {
            v.push_back(n);
        }
        return v;
    }
}

/// ----------------------------------------------Sorting----------------------------------------------- ///

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
/// ----------------------------------------------DATA STRUCTURES----------------------------------------------- ///

/// ----------------------------------------------CODE by Sandeep kumar----------------------------------------------- ///

void solve(int it)
{
     
    
}
signed main()
{
    fast_cin();
    // freopen ("input.txt" , "r" , stdin);
    // freopen ("output.txt", "w" , stdout);
    // manipulated_seive(MAX_SIZE);
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve(it);
    }
    cerr << "time taken : " << (float)clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
    return 0;
}
