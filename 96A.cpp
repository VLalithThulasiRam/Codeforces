#include<iostream>
using namespace std;
int main(){

    string n;
    char prev = '#';
    cin >> n;
    int a = 0;

    for(char c : n){
        if(a >= 7){
            cout << "YES";
            return 0;
        }
        if(c == prev || prev == '#'){
            a ++;
        }else{
            a = 1;
        }
        prev = c;
    }
    if(a >= 7)  cout << "YES";
    else    cout <<"NO";
    
    return 0;
}