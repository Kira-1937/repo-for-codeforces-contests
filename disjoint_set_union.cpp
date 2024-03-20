using namespace std;
#include <bits/stdc++.h>

class disjoint
{
    vector<int> parent, rank, size;

public:
    disjoint(int n)
    {

        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int
    finditsparent(int i)
    {
        if (parent[i] == i)
        {
            return i;
        }
        return parent[i] = finditsparent(parent[i]);
    }

    void union_by_rank(int u, int v)
    {
        int up_u = finditsparent(u);
        int up_v = finditsparent(v);
        if (up_u == up_v)
        {
            return;
        }
        else if (rank[up_u] > rank[up_v])
        {
            parent[up_v] = up_u;
        }
        else if (rank[up_v] > rank[up_u])
        {
            parent[up_u] = up_v;
        }
        else
        {
            parent[up_u] = up_v;
            rank[up_v]++;
        }
    }

    void union_by_size(int u, int v)
    {
        int up_u = finditsparent(u);
        int up_v = finditsparent(v);
        if (up_u == up_v)
        {
            return;
        }
        else if (size[up_u] > size[up_v])
        {
            parent[up_v] = up_u;
            size[up_u] = size[up_u] + size[up_v];
        }
        else
        {
            parent[up_u] = up_v;
            size[up_v] = size[up_v] + size[up_u];
        }
    }
};
int main()
{
   
    disjoint ds(7);
    ds.union_by_size(1, 2);
    ds.union_by_size(2, 3);
    ds.union_by_size(4, 5);
    ds.union_by_size(6, 7);
    // if 3 and 7 same or not
    if (ds.finditsparent(3) == ds.finditsparent(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.union_by_size(5, 6);
    ds.union_by_size(3, 7);

    if (ds.finditsparent(3) == ds.finditsparent(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}