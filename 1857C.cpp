#include <iostream>
#include<climits>
#include <algorithm>
#include <vector>
using namespace std;

void yo() {

    vector<int> b;
    vector<int> ans;
    int size, index = 0, c = 1, val;
    cin >> size;

    int bsize = (size * (size - 1)) / 2;

    for(int i = 0; i < bsize; i ++){
        cin >> val;
        b.push_back(val);
    }
    
    sort(b.begin(),b.end());

    for(int i = size - 1; i >= 1; i --){
        cout << b[index] << " ";
        index += i;
    }
    cout << b[bsize - 1];

}

int main() {

    int n;
    cin >> n;
    while(n--) {
        yo();
        cout << endl;
    }
    return 0;
}
