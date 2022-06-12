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
    int h, w;
    cin >> h >> w;
    vvi a(h, vi(w));
    rep(i, h) rep(j, w) cin >> a[i][j];

    vi tate(h), yoko(w);

    rep(i, h) {
        rep(j, w) {
            tate[i] += a[i][j];
        }
    }

    rep(i, w) {
        rep(j, h) {
            yoko[i] += a[j][i];
        }
    }

    rep(i, h) {
        rep(j, w) {
            cout << tate[i] + yoko[j] - a[i][j] << " ";
        }
        cout << endl;
    }
}