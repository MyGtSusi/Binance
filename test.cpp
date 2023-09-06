#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n; 
    vector<int>vec(n);
    for(auto &i : vec) cin >> i;
    sort(vec.rbegin(), vec.rend());
for(auto &i : vec) cout << i << '\n';
  }
}
