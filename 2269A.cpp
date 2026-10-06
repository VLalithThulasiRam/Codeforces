#include <iostream>

using namespace std;
    
int main() {
    
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;

        cout << 2 * (k - 1) + (1LL << (n - k + 1)) << endl;
    }
    
    return 0;
}
