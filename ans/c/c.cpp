#include<bits/stdc++.h>
using namespace std;
signed main() {
    int n, a, b;
    priority_queue<int> pq;
    cin>>n;
    while(n--) {
        cin>>a>>b;
        if(a==1) pq.push(b);
        else {
            while(b--) {
                cout<<pq.top()<<" ";
                pq.pop();
            }
            cout<<'\n';
        }
    }
}