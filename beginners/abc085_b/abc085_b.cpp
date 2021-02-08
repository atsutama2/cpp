#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> st;
    for(int i=0; i < N; i++) {
        int d;
        cin >> d;
        st.insert(d);
    }

    cout << st.size() << endl;

    // set使わない
    // vector<int> vec(N);
    // for(int i=0; i < N; i++) {
    //     cin >> vec.at(i);
    // }
    // sort(vec.begin(), vec.end());
    // reverse(vec.begin(), vec.end());

    // int sum = 0;
    // int x = 0;
    // for(int i=0; i < N; i++) {
    //     if(x != vec.at(i)){
    //         sum ++;
    //     }
    //     x = vec.at(i);
    // }

    // cout << sum << endl;
}