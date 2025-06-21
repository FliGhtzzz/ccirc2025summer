# 所有題目之答案的詳解
## A. 奇怪的演算法 (Weird Algorithm) -100pts
題解 : 理解題目意思直接實作即可，注意到 $n$ 在模擬的過程中可能會 overflow，記得用 long long。
```cpp
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
```
## B. CCIRC (CCIRC)-700pts
題文 : 無
題解 : 觀察到範例測資都是 : 第一行給一個數字 $n$，且接著有 $n$ 行的格式，又我們發現到範例輸出也是有 $n$ 個字元。
接著靠通靈以及觀察可以發現 題目名稱叫 **CCIRC** ，推測與之有關。最後便可以通靈到 AC。
```cpp
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
```
## C. 文件處理 (Documents)-200pts
題解 : 很明顯的 `priority_queue` 模板題。
```cpp
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
```
## D. 蔚藍星星 (BlueStar)-400pts
題解 : 可以使用自定義排序，或你很聰明可以直接排序。
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
static bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
     if (a.first!=b.first){
        return a.first<b.first;
    }else{
        return a.second>b.second;
    }
}
signed main() {
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
```