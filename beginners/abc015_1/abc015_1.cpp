#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int num1 = a.size();
    int num2 = b.size();

    if (num1 < num2)
    {
        cout << b << endl;
    }
    else
    {
        cout << a << endl;
    }
}