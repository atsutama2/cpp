#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> Arr(N);

    for(int i=0; i < N; i++) {
        cin >> Arr.at(i);
    }

    int i = 1;
    int count = 0;

    while (true) {
        if(count == 2) {
            cout << 2 << endl;
            return 0;
        }
        count = Arr.at(i);
    }
    cout << -1 << endl;
}