#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    string str;

    cin >> H >> W;

    string wall = "";
    for(int i=0; i < W+2; i++) {
        wall += "#";
    }
    cout << wall << endl;

    for(int i=0; i < H; i++) {
        cin >> str;
        cout << "#" + str + "#" << endl;
    }
    cout << wall << endl;
}