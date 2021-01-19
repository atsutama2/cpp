#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B;
    string op;
    cin >> A >> op >> B;

    // if (A == 0 || B == 0) {
    //     cout << 0 << endl;
    //     return 0;
    // }

    // if (B == 0 || op == "?") {
    //     cout << "error" << endl;
    //     return 0;
    // }

    if (op == "+") {
        cout << A + B << endl;
    } else if (op == "-") {
        cout << A - B << endl;
    } else if (op == "*") {
        cout << A * B << endl;
    } else if (op == "/" && B != 0) {
        cout << A / B << endl;
    } else {
        cout << "error" << endl;
    }
}