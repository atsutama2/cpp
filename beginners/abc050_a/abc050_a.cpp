#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string op;
    cin >> a >> op >> b;

    if (op == "+")
    {
        int ans = a + b;
        cout << ans << endl;
    }
    else if (op == "-")
    {
        int ans = a - b;
        cout << ans << endl;
    }
}