#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, A;
    cin >> N >> A;

    rep(i, N) {
        string op;
        int b;
        cin >> op >> b;

        if (op == "+") {
            A += b;
        } else if (op == "-") {
            A -= b;
        } else if (op == "*") {
            A *= b;
        } else if (op == "/") {
            A /= b;
        } else {
            cout << "error" << endl;
            break;
        }
        cout << i + 1 << ":" << A << endl;
    }
}