#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define endl "\n"
const int N = 1e6 + 7;

void stdio() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
    int n, m, x; cin >> n >> m;

    vector<int>v(n); for (auto &it : v)cin >> it;
    sort(v.begin(), v.end());


    multiset<int>st(v.begin(), v.end());

    int ans = 0;
    bool ansNotExist = false;
    while (m-- > 0) {
        int x; cin >> x;
        auto lower = st.lower_bound(x);
        //cout << *lower << endl;
        if (lower == st.end()) {ansNotExist = true; break;}
        ans += *lower; st.erase(lower);
    }
    if (ansNotExist) {cout << -1 << "\n"; return;}
    cout << ans << "\n";
}

int32_t main() {
    FAST
    stdio();
    int t = 1, i = 0; //cin >> t;
    while (t -- > 0) {
        //cout << "Case " << ++i << ": ";
        solve();
    }
    return 0;
}
