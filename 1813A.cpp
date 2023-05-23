#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
//  #include<iostream.h>/
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
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

//push an element 
void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
  
    /* 2. put in the data */
    new_node->data = new_data;
  
    /* 3. Make next of new node as head
    and previous as NULL */
    new_node->next = (*head_ref);
    new_node->prev = NULL;
  
    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
  
    /* 5. move the head to point to the new node */
    (*head_ref) = new_node;

    // return ;
}

void deleteNode(Node** head_ref, Node* del) 
{ 
    /* base case */
    if (*head_ref == NULL || del == NULL) 
        return; 
  
    /* If node to be deleted is head node */
    if (*head_ref == del) 
        *head_ref = del->next; 
  
    /* Change next only if node to be 
    deleted is NOT the last node */
    if (del->next != NULL) 
        del->next->prev = del->prev; 
  
    /* Change prev only if node to be 
    deleted is NOT the first node */
    if (del->prev != NULL) 
        del->prev->next = del->next; 
  
    /* Finally, free the memory occupied by del*/
    free(del); 
    return; 
} 


//code from 

const double EPSILON = 1e-6; // threshold for convergence
const int MAX_ITERATIONS = 1000; // maximum number of iterations

// Function to calculate the total weight of all the blocks
double calculateTotalWeight( vector<double>& weights,vector<double>& d) {
    double totalWeight = 0.0;
    for (int i = 0; i < weights.size(); ++i) {
        totalWeight += weights[i]*d[i];
    }
    return totalWeight;
}

// Function to initialize the allocation of space for each block
vector<double> initializeAllocation( vector<double>& weights, vector<double>&d, double totalWeight, double totalSpace) {
    vector<double> allocation(weights.size());
    for (int i = 0; i < weights.size(); ++i) {
        allocation[i] =1+floor (totalSpace * weights[i]*d[i] / totalWeight);
    }
    return allocation;
}

// Function to check if the allocation has converged
bool hasConverged( vector<double>& oldAllocation,  vector<double>& newAllocation) {
    for (int i = 0; i < oldAllocation.size(); ++i) {
        if (abs(oldAllocation[i] - newAllocation[i]) > EPSILON) {
            return false;
        }
    }
    return true;
}


vector<int> allocateSpace( vector<double>& weights, vector<double>& d,int totalSpace) {
    double totalWeight = calculateTotalWeight(weights,d);
    vector<double> allocation = initializeAllocation(weights,d, totalWeight, totalSpace);
    int numIterations = 0;
    while (numIterations < MAX_ITERATIONS) {
        // Calculate the total allocation for each priority level



        vector<double> totalAllocation(allocation.size());
        for (int i = 0; i < allocation.size(); ++i) {
           
            totalAllocation[i] = allocation[i];
        }

      int talo=0;
      for(int i=0;i<totalAllocation.size();i++){
        talo+=totalAllocation[i];
      }
        // Calculate the scaling factor for each priority level
        vector<double> scalingFactor(allocation.size());
        for (int i = 0; i < allocation.size(); ++i) {
            scalingFactor[i] =   totalAllocation[i]/talo;
        }
trace(allocation);
     trace(scalingFactor);
        // Multiply the allocation of space for each block at that level by its scaling factor
        vector<double> newAllocation(allocation.size(), 0.0);
        for (int i = 0; i < allocation.size(); ++i) {
             // assume 10 priority levels
            newAllocation[i] = floor( totalSpace* scalingFactor[i]);
            if(newAllocation[i]==0){
                newAllocation[i]=1;
            }
        }

        // Check if the allocation has converged
        if (hasConverged(allocation, newAllocation)) {
            break;
        }

        allocation = newAllocation;
        ++numIterations;
    }

    // Round off the final allocation for each block to the nearest integer
    vector<int> finalAllocation(allocation.size(), 0);
    for (int i = 0; i < allocation.size(); ++i) {
        finalAllocation[i] = round(allocation[i]);
    }

    return finalAllocation;
}



void solve(int it)
{ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<<setprecision(25);
	int n ,q,m;
    cin>>n>>q>>m;
    vector<double>p,d;
  long long sum=0;
    for(int i=0;i<n;i++){
      double x;
      cin>>x;
    //   sum=sum+x*x;
      p.pb(x);  
    }
for(int i=0;i<n;i++){
        double x;
        cin>>x;
        d.pb(x);
        sum=sum+p[i]*x;
    }
    trace(sum);
    sum=sqrtl(sum);
    // trace(sum);


    
    // trace(p,d);
    int arr[n][3];
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[i][0]=x;
        arr[i][1]=y;
        arr[i][2]=z;
        // trace(x,y,z);
    }
    
    vector<int >v;
    v=allocateSpace(p,d,q) ;
    vector<int>vi(n),vt(n);

    int q1=q;





   long long svr=0;

        for(int i=0;i<n;i++){
            if(v[i]>arr[i][2]){
                svr+=v[i]-arr[i][2];
                v[i]=arr[i][2];
               
            }
            if(v[i]<arr[i][0]){
                v[i]=arr[i][0];
                svr+=v[i]-arr[i][0];
            }
          
        }
     
     trace(svr);
while(svr>0){
    for(int i=0;i<n;i++){
        
        if(v[i]<arr[i][2]){
            v[i]++;
            svr--;
        }
        if(svr==0){
            break;
        }
    }
}
while(svr<0){
    for(int i=0;i<n;i++){
        if(v[i]>arr[i][0]){
            v[i]--;
        }
        if(svr==0){
            break;
        }
    }
}

trace(v);




// long long sumvr=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0){
//             v[i]=((p[i]*d[i]*q1)/sum);
//             sumvr+=v[i];
//             trace(((p[i]*q1)/sum));

//         }
//           svr+=v[i];
//     }



//       trace(v); 
//     trace(svr);
//    svr=svr-q;
//    trace(svr);

//  while(svr>0){
   
//     for(int i=0;i<n;i++){
//         if(v[i]>1){
//             v[i]--;
//             svr--;
//         }
//         if(svr==0){
//             break;
//         }
//     }
    
//  }

trace(v);













       vi[0]=1;
      for(int i=1;i<n;i++){
       vi[i]=v[i-1]+vi[i-1];
      }


trace(vi);


vector<int>sizev;
for(int i=0;i<n;i++){
    sizev.pb(0);
}


 map<int ,Node*>mp;


 for(int i=0;i<n;i++){
   Node* head =new Node() ;
   mp[i]=head;
 }

trace(v);
map<int,Node*>ms;
for(int i=0;i<n;i++){
      Node* head =new Node() ;

    ms[i]=head;
}
// trace(mp,ms);

vector<vector<int> >vp;
for(int i=0;i<n;i++){
    vector<int>vvv;
    vp.pb(vvv);
}

while(m){
    m--;
int x,y;
cin>>x>>y;
x--;
// trace(mp[x]->data);
Node *pp=ms[x];
bool t=false;
int jj=0;
int ssize=v[x];
while(pp->next!=NULL&&ssize>0){
if(pp->data==y){
    t=true;
   
    break;
}
// cout<<t<<" "<<pp->data<<" ";
pp=pp->next;
ssize--;
jj++;
}


 

trace(t);
 

if(t){   

deleteNode(&ms[x], pp); 




// trace(t,t);
// trace(vp);
vp[x][jj]++;


Node* nn=mp[x];
while(jj>0){
    jj--;
    nn=nn->next;
}
push(&mp[x],nn->data); 
cout<<nn->data<<endl;
deleteNode(&mp[x], nn);



}

  
else
{
    
    if(sizev[x]<v[x]){
    sizev[x]++;
    vt[x]++;
    if(vt[x]>v[x]){
    vt[x]=1;
    } 

    int nod=vi[x]+vt[x]-1;
    // Node* mp[x];
    push(&mp[x],nod);
   
    cout<<nod<<endl;

    reverse(vp[x].begin(),vp[x].end());
    vp[x].pb(1);
    reverse(vp[x].begin(),vp[x].end());
    
    
}
else {

      
        Node* nn=mp[x];
        Node* ff=ms[x];



        
   int jj1=0;

  int mn=vp[x][0];
for(int i=1;i<vp[x].size();i++){
    if(mn<=vp[x][i]){
        mn=vp[x][0];
        jj1=i;
    }
}

int jj2=jj1;


    while(jj1){
        ff=ff->next;
        jj1--;
    }
   deleteNode(&ms[x], ff); 
jj1=jj2;





    
while(jj1){
    jj1--;
        
       nn= nn->next;
       
    }






cout<<nn->data<<endl;
push(&mp[x],nn->data);
deleteNode(&mp[x], nn);

auto itt=vp[x].begin()+jj2;
vp[x].erase(itt);



   reverse(vp[x].begin(),vp[x].end());
    vp[x].pb(1);
    reverse(vp[x].begin(),vp[x].end());
}
}




push(&ms[x],y);

}









   

//   trace(v,vi,vt);

//     while(m){
//         m--;
//      int x,y;
//      cin>>x>>y;
//       x--;
//       vt[x]++;
//       if(vt[x]>v[x]){
//        vt[x]=1;
//       } 
//       cout<<vi[x]+vt[x]-1<<endl; 
     



//     }





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