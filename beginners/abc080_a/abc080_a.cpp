#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int c = n * a;
    if ( c < b) {
        cout << c << endl;
    } else {
        cout << b << endl;
    }
}