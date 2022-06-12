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
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int ans = 0;

    for(int bit = 0; bit < (1 << n); bit++) {
        vi abc(26);
        for(int i = 0; i < n; i++) {
            if(bit & (1 << i)) {
//                cout << "1 ";
                rep(j, (int)s[i].size()) {
                    abc[s[i][j] - 'a']++;
                }
            } else {
//                cout << "0 ";
            }
        }
        int foo = 0;
        rep(i, 26) {
            if(abc[i] == k) foo++;
        }
        if(foo > ans) ans = foo;

//        cout << ": ";
        rep(j, 26) {
//            cout << abc[j] << " ";
        }
//        cout << endl;
    }

    cout << ans << endl;
}