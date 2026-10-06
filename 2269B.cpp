#include <iostream>
#include <unordered_map>

using namespace std;

int yo(int x) {
    int digit, sum = 0;
    while(x != 0){
        digit = x % 10;
        x /= 10;
        sum += digit * digit;
    }
    return sum;
}

    
int main() {
    
    int n, val, t, curr;

    if (cin >> t) {
        while (t--) {
            unordered_map<int,int> m;
            long long ans = 0;
            cin >> n ;

            for(int i = 0; i < n; i ++){
                cin >> val;

                curr = val;
                

                for (int night = 0; night < 100; night++){
                    curr = yo(curr);
                        if(curr == 1)break;
                }
                m[curr] ++;
                
            }
            for(auto x: m){
                ans += (x.second*(x.second-1))/2;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
