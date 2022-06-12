// #define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define srep(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), s(n + 1);
    rep(i, n) cin >> a[i];

    rep(i, n) {
        s[i + 1] = s[i] + a[i];
    }

    ll ans = 0;

    rep(l, n - 1) {
        ans += a[l] * ((s[n] - s[l + 1]) % 1000000007);
    }

    cout << ans  << endl;
}