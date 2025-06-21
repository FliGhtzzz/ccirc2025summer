#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
signed main() {
    fast;
    int x;
    cin>>x;
    cout<<x<<" ";
    while(x>1) {
        if(x%2==0) x/=2;
        else x=3*x+1;
        cout<<x<<" ";
    }
    return 0;
}