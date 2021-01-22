#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;

    string str1;
    string str2;

    rep(i, a) {
        str1 += "]";
    }

    rep(i, b) {
        str2 += "]";
    }

    cout << "A:" + str1 << endl;
    cout << "B:" + str2 << endl;
}