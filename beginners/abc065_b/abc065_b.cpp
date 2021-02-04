#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int Arr[N];

    for(int i=0; i < N; i++) {
        cin >> Arr[i];
    }

    int j = 1;
    int count = 0;

    for(int i=0; i < N; i++){
        if(j == 2) {
            cout << count << endl;
            break;
        }
        j = Arr[j - 1];
        count++;
    }

    if(j != 2) 
        cout << -1 << endl;
}