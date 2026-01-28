#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1); 
    vector<long long> p(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = p[i - 1] + a[i]; 
    }

    while (q--) {
        int l, r;
        long long k; 
        cin >> l >> r >> k;

        long long oldRangeSum = p[r] - p[l - 1];

       
        long long newRangeSum = (r - l + 1) * k;

        long long totalSum = p[n] - oldRangeSum + newRangeSum;

        if (totalSum % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}