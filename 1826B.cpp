#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

void yo() {

    vector<int> v;
    int size, val, ans = 0;
    cin >> size;

    for(int i = 0; i < size; i ++){
        cin >> val;
        v.push_back(val);
    }

    int start = 0, end = size - 1;
    while(start <= end && v[start] == v[end]){
        start ++;
        end --;
    }
    if(start >= end){
        cout << "0";
        return;
    }

    int H = -1, h;
    
    while(start <= end){

        h = abs(v[start] - v[end]);

        if(H == -1) H = h;

        H = gcd(h, H);

        start ++;
        end --;

    }
    
    cout << H;
    
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
