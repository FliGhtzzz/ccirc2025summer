#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
static bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
     if (a.first!=b.first){
        return a.first<b.first;
    }else{
        return a.second>b.second;
    }
}
static bool ok(const pair<int, int>& c, const pair<int, int>& d)
{
    return c.F < d.F;
}
signed main() 
{
    int x, a, b;
    cin>>x;
    vector<pair<int, int>> v;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b;
        v.pb(mp(a, b));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<x;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
    return 0;
}