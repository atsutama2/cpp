#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int high = max({160,154,152});
  int low  = min({160,154,152});

  cout << high - low << endl;
}