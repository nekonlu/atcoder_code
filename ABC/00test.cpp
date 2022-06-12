// #define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define srep(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;

    for(int bit = 0; bit < (1 << n); bit++) {
        for(int i = 0; i < n; i++) {
            if(bit & (1 << i)){
                cout << a[i] << " ";
                ans += a[i];
            }
        }
        cout << endl;
    }

    cout << ans << endl;
}