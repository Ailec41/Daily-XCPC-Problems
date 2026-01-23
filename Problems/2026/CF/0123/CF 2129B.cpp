#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int ans = 0;
    vector<int> cost(n);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] < p[j]) {
                cost[i]++;
            } else {
                ans++;
                cost[j]--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        ans += min(0, cost[i]);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) solve();
    // solve();
    return 0;
}
