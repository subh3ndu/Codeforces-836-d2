#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. SSeeeeiinngg DDoouubbllee

void solve() {
    string s;
    cin >> s;
    int n = (int)s.length();

    string b = "";
    for(int i = n-1; i >= 0; i--) {
        b += s[i];
    }

    cout << s + b << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}

