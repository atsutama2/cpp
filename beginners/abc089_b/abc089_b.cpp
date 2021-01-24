#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    string text_list;

    int i = 0;
    while(i < N) {
        string x;
        cin >> x;
        if (x == "Y"){
            cout << "Four" << endl;
            break;
        }
        if ((i == N - 1 ) && (x != "Y")) {
            cout << "Three" << endl;
        }
        i++;
    }
}