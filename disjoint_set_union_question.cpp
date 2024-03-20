//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class disjoint{
    vector<int>parent,rank,size;
    public:
   disjoint(int n ){
       parent.resize(n+1);
       rank.resize(n+1,0);
       size.resize(n+1,1);
       for(int i=0;i<=n;i++){
           parent[i]=i;
       }
   } 
   
   int findparent(int n ){
       if(parent[n]==n){
           return n;
       }
       return parent[n]=findparent(parent[n]);
   }
   
   void unionbyrank(int u,int v){
       int up_u=findparent(u);
       int up_v=findparent(v);
    //   cout<<up_u<<" "<<up_v<<endl;

       if(up_v==up_u){
        // cout<<rank[up_u]<<" "<<rank[up_v]<<endl;
           return ;
       }
       
       else if(rank[up_u]>rank[up_v]){
           parent[up_v]=up_u;
       }
       else if(rank[up_v]>rank[up_u]){
           parent[up_u]=up_v;
       }
       else {
           parent[up_u]=up_v;
           
           rank[up_v]++;
       }
       
       return ;
       
       
   }
   
   void unionbysize(int u,int v){
        int up_u=findparent(u);
       int up_v=findparent(v);
       if(up_v==up_u){
           return ;
       }
       if(size[up_u]>size[up_v]){
           parent[up_v]=up_u;
           size[up_u]+=size[up_v];
       }
       else{
           parent[up_u]=up_v;
           size[up_v]+=size[up_u];
       }
   }
    
    
};

class Solution
{
    
	public:
	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        
        vector<pair<int,pair<int,int>>>pq;
        
        for(int i=0;i<V;i++){
             for (auto it:adj[i]) {
                int adjNode = it[0];
                int wt = it[1];
                int node = i;

                pq.push_back({wt, {node, adjNode}});
            }
        }
        
        sort(pq.begin(),pq.end());
        int sum=0;
        
        disjoint ds(V);
        
        for(auto it:pq){
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            // cout<<ds.findparent(u)<<" "<<ds.findparent(v)<<" ";
            if(ds.findparent(u)!=ds.findparent(v)){
                sum+=wt;
                // cout<<wt<<" "<<u<<" "<<v<<endl;
                ds.unionbyrank(u,v);
            }
        }
        return sum;
        
        
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends