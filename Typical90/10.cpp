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
    vi c(n), p(n);
    rep(i, n) cin >> c[i] >> p[i];
    int q;
    cin >> q;
    vi l(q), r(q);
    rep(i, q) cin >> l[i] >> r[i];

    vi s1(n + 1), s2(n + 1);

    rep(i, n) {
        s1[i + 1] = s1[i];
        s2[i + 1] = s2[i];
        if (c[i] == 1) {
            s1[i + 1] += p[i];
        } else {
            s2[i + 1] += p[i];
        }
    }

    rep(i, q) {
        cout << s1[r[i]] - s1[l[i] - 1] << " " << s2[r[i]] - s2[l[i] - 1] << endl;
    }
}