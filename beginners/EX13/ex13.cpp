#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N;

    vector<int> list(N);
    for(int i=0; i < N; i++)
    {
        cin >> list.at(i);
    }

    int sum = 0;
    for(int i=0; i < N; i++){
        sum += list.at(i);
    }

    int mean = sum / N;

    for(int i=0; i < N; i++){
        if(mean < list.at(i)) {
            cout << list.at(i) - mean << endl;
        } else {
            cout <<  mean - list.at(i) << endl;
        }
    }
}