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
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vi tate(w), yoko(h);

    rep(i, w) {
        int pre = 0;
        rep(j, h) {
            if(s[j][i] == '.') {
                pre++;
            } else {
                pre = 0;
            }

            if(tate[i] <= pre) {
                tate[i] = pre;
            }
        }
    }

    rep(i, h) {
        int pre = 0;
        rep(j, w) {
            if(s[i][j] == '.') {
                pre++;
            } else {
                pre = 0;
            }

            if(yoko[i] <= pre) {
                yoko[i] = pre;
            }
        }
    }

    cout << *max_element(tate.begin(), tate.end()) + *max_element(yoko.begin(), yoko.end()) - 1 << endl;
}