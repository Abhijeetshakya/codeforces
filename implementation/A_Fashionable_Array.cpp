#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());

        if ((mn + mx) % 2 == 0) {
            cout << 0 << "\n";
        } else {
            cout << min(even, odd) << "\n";
        }
    }
    return 0;
}
