#include <iostream>
#include <vector>
#include <numeric>
using namespace std ; 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int val = -1; 
    bool pos = true;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == -1) {
            continue; 
        }

        if (a[i] == 0) {
            pos = false;
        }

        if (a[i] > 0) {
            if (val == -1) {
                val = a[i];
            } else if (a[i] != val) {
                pos = false;
            }
        }
    }

    if (pos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}