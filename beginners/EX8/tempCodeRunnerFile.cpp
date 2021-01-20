#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    int price;
    int p;

    cin >> p;

    // パターン1
    if (p == 1) {
        int price;
        cin >> price;
    }

    // パターン2
    if (p == 2) {
        cin >> text >> price;
    }

    int N;
    cin >> N;

    cout << text << "!" << endl;
    cout << price * N << endl;
}
