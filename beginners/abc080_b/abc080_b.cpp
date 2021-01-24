#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    int total = 0;
    int i = 0;
     while(i < N.size()) {
         char num = N.at(i);
         total += num - '0';
         i++;
    }

     if (stoi(N) % total == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}