#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, l, r;
    cin >> N;

    int i = 0;
    int total = 0;
    while(i < N) {
        cin >> l >> r;

        total += (r -l) + 1;

        i++;
    }
    cout << total << endl;
}