#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void yo() {
    int n;
    long long x;
    if (!(cin >> n >> x)) return;

    vector<long long> v(n);
    long long m = LLONG_MAX;
    long long M = LLONG_MIN;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        m = min(m, v[i]);
        M = max(M, v[i]);
    }

    long long c = M * n - sum;

    if (c <= x) {
        cout << M + (x - c) / n;
        return;
    }

    long long low = m, high = M;
    long long ans = m;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long cost = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] < mid) {
                cost += (mid - v[i]);
            }
        }

        if (cost <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            yo();
            cout << "\n";
        }
    }
    return 0;
}
