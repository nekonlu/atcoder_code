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
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    vi l(q), r(q), x(q);
    rep(i, q) cin >> l[i] >> r[i] >> x[i];

    vvi table(n, vi(n + 1));

    rep(i, n) {
        table[a[i] - 1][i + 1]++;

    }
}