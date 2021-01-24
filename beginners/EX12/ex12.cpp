#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 1;

    if (S != "1") {
        int num = S.size();

        char plus  = '+';
        char minus = '-';

        for(int i = 0; i < num; i++) {
            if (S.at(i) == plus) {
                count += 1;
            } else if (S.at(i) == minus) {
                count -= 1;
            }
        }
        cout << count << endl;
    } else {
        cout << S << endl;
    }

}
