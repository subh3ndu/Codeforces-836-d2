#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. XOR = Average

void solve() {
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << 1 << " " << 3 << " ";
        for(int i = 0; i < n - 2; i++)
            cout << 2 << " ";
        cout << "\n";
    } else {
        for(int i = 0; i < n; i++) 
            cout << 1 << " ";
        cout << "\n";
    }
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
