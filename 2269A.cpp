#include <iostream>
#include <cmath>

using namespace std;
    
int main() {
    
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        k--;
        cout << 2 * k + pow(2 , n - k) << endl;
    }
    
    return 0;
}
