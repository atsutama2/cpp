#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    // 1.の出力
    x++;
    cout << x << endl;

    // 2.の出力
    int c = x * (a + b);
    cout << c << endl;

    // 3.の出力
    int d = c * c;
    cout << d << endl;

    // 4.の出力
    cout << d -1 << endl;
}
