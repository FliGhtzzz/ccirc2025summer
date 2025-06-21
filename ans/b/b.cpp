#include<bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n;
    string s="ccirc";
    for(int i=1;i<=n;i++) {
        cin>>a>>b;
        cout<<(char)((s[a%5]-'a'+b)%26+'a');
    }
}