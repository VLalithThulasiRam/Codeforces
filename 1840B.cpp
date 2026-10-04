#include <iostream>
#include <algorithm>

using namespace std;

void yo() {
    long long n, k;
    cin >> n >> k;
    
    if (k >= 62) {
        cout << n + 1;
    } else {
        long long power_of_two = 1LL << k;
        cout << min(n + 1, power_of_two);
    }
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
