#include<iostream>
using namespace std;
void specialabbr(string s){
    int size = s.length();
    if(size > 10){
        cout << s[0] + to_string(size - 2) + s[size - 1] << endl;
    }else{
        cout << s << endl;
    }
}
int main(){
    
    int n;
    string s;
    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> s;
        specialabbr(s);
    }

    return 0;
}