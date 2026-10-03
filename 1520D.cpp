#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void yo() {
    int size;
    cin >> size;

    unordered_map<int, long long> c;
    long long ans = 0;
    
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        
        int t = val - i;
        
        ans += c[t];
        
        c[t] ++;
    }
    
    cout << ans << "\n";
}

int main() {
    
    int n;
    cin >> n;
    while (n--) {
        yo();
    }
    return 0;
}
