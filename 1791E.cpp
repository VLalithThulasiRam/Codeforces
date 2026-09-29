#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

void yo() {
    int size;
    cin >> size;
    
    long long val;
    long long m = INT_MIN; 
    long long sum = 0;
    int neg = 0;
    
    for(int i = 0; i < size; i++) {
        
        cin >> val;
        if(val <= 0) {
            neg++;
            m = max(m, val);
        }
        sum += abs(val);
    }
    
    if(m == INT_MIN) {
        cout << sum << "\n";
    } else if(neg % 2 == 0) {
        cout << sum << "\n";
    } else {
        cout << sum + 2 * m << "\n"; 
    }
}

int main() {

    int n;
    cin >> n;
    while(n--) {
        yo();
    }
    return 0;
}
