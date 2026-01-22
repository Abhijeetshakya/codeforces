#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int L = 0;
        while (L < n && a[L] == a[0]) {
            L++;
        }

        if (L == n) {
            cout << 0 << "\n";
            continue;
        }

        int R = 0;
        while (R < n && a[n - 1 - R] == a[n - 1]) {
            R++;
        }

        if (a[0] == a[n - 1]) {
            cout << max(0, n - (L + R)) << "\n";
        } else {
            cout << min(n - L, n - R) << "\n";
        }
    }
    return 0;
}