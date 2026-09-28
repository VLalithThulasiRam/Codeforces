#include<iostream>
#include<vector>
using namespace std;

void yo(){
    int size;
    cin >> size;

    vector<int> temp(size);
    for(int i = 0; i < size; i++) cin >> temp[i];

    // Remove consecutive duplicates 
    vector<int> a;
    for(int i = 0; i < size; i++){
        if(a.empty() || a.back() != temp[i]){
            a.push_back(temp[i]);
        }
    }

    if(a.size() <= 1){
        cout << 1 << endl;
        return;
    }

    int ans = 1;
    int m = 0; // 0 = start, 1 = increasing, -1 = decreasing

    // 3. Increment ans whenever direction changes 
    for(size_t i = 1; i < a.size(); i++){
        if(a[i] > a[i-1]){
            if(m != 1){
                ans++;
                m = 1;
            }
        }
        else if(a[i] < a[i-1]){
            if(m != -1){
                ans++;
                m = -1;
            }
        }
    }
    
    cout << ans << endl;
}

int main(){

    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        yo();        
    }

    return 0;
}