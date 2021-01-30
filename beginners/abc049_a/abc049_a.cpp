#include <bits/stdc++.h>
using namespace std;

int main() {
    string c;
    cin >> c;

    string s = "aiueo";
    if(s.find(c) != string::npos) {
        cout << "vowel" << endl;
    } else {
        cout << "consonant" << endl;
    }
}