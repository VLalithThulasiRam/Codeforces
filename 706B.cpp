#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int yo( vector<int> &arr, int target){

    int low = 0, ans = -1;
    int high = arr.size() - 1;

    while (low <= high) {
        
        int mid = low + (high - low) / 2;
        
        if (arr[mid] <= target){
            ans = mid;
            low = mid + 1;
        }else    high = mid - 1;
        
    }

    return ans;
}

int main() {

    vector<int> v;
    int n, val, q;

    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());

    cin >> q;
    for(int i = 0; i < q; i ++){
        cin >> val;
        cout << yo(v, val) + 1 << endl;
    }
    return 0;
}
