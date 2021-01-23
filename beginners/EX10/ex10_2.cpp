#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int i = 0;
    int j = 0;

    string str1;
    string str2;

    while(i < A) {
        str1 += "]";
        i++;
    }
    cout << "A:" + str1 << endl;

    while(j < B) {
        str2 += "]";
        j++;
    }
    cout << "B:" + str2 << endl;
}
