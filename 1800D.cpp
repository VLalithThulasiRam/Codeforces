#include<iostream>
using namespace std;
int main(){
    
    int n, size, ans;
    string s;
    cin >> n;

    for(int i = 0; i < n; i ++){

        cin >> size;
        cin >> s;
        ans = size - 1;
        
        for(int i = 0; i < size - 2 ; i ++){
            if(s[i] == s[i + 2])    ans--;
        }
        cout << ans << endl;
    }

    return 0;
}