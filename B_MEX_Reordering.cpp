#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int c0 = 0;
    int c1 = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 0) c0++;
        if (a == 1) c1++;
    }

    if (c0 == 0 || (c1 == 0 && c0 >= 2)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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