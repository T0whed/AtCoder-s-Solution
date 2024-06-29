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
    int n, k; cin >> n >> k;
    int arr[n];
    for (auto i = 0; i < n; ++i)cin >> arr[i];

    int r = 0;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] + r + k << "\n";
        if (i < n - 1 and arr[i + 1] < (arr[i] + r + k))r = arr[i] + k + r - arr[i + 1];
        else r = 0;
    }
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
