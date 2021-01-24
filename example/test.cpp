#include <iostream>
using namespace std;

int main() {
    int num, sum;
    sum = 0;

    while(cin >> num && num != 0)
        sum = sum + num;
    cout << sum << endl;
}