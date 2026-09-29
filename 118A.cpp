#include<iostream>
#include <cctype> //to use to_lower
#include<string> //to use .find
using namespace std;
int main(){

    string vowels = "aeiouAEIOUYy";
    string s, ans = "";
    cin >> s;

    for(int i = 0; i < s.size(); i ++){

        if(vowels.find(s[i]) == string::npos){
            ans = ans + '.' + static_cast<char>(tolower(s[i]));
        }
    }
    cout << ans;
    
    return 0;
}