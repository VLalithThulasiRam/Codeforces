#include <iostream>
#include<vector>
using namespace std;

void yo() {

    vector<int> a;
    int size, val, prev = -1, ans = 0;
    cin >> size;

    for(int i = 0; i < size; i ++){
        cin >> val;

        if(prev != -1)  if(val - prev == 1) ans ++;

        a.push_back(val);
        prev = val;
    }

    for(int i = 0; i < size; i ++){
        for(int j = i + 2; j < size; j ++){
            if(j - i == a[j] - a[i]){
                ans ++;
            }
        }
    }

    cout << ans << endl;
}

int main() {

    int n;
    cin >> n;
    while(n--) {
        yo();
    }
    return 0;
}
