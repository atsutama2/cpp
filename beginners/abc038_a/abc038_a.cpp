#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string lastStr = str.substr(str.length() -1);
    if(lastStr == "T") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}