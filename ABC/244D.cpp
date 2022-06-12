#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define srep(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int main() {
    vector<char> s(3), t(3);
    rep(i, 3) cin >> s[i];
    rep(i, 3) cin >> t[i];

    if(s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    vector<char> pre = t;
    pre[0] = t[1];
    pre[1] = t[2];
    pre[2] = t[0];
    if(s == pre) {
        cout << "Yes" << endl;
        return 0;
    }
    pre = t;
    pre[0] = t[2];
    pre[1] = t[0];
    pre[2] = t[1];
    if(s == pre) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}