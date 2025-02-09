#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 1e9; i += i) {
        cout << i << '\n';
    }

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x % 2 == 0) cout << "Even" << '\n';
        else cout << "Odd\n";
    }

}