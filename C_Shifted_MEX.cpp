#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    a.erase(unique(a.begin(), a.end()), a.end());

    int max_streak = 0;
    int current_streak = 0;

    for (size_t i = 0; i < a.size(); ++i) {
        if (i > 0 && a[i] == a[i - 1] + 1) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        max_streak = max(max_streak, current_streak);
    }

    cout << max_streak << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}