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
    vector<string> s(n), t(n);
    rep(i, n) cin >> s[i] >> t[i];

    rep(i, n) {
        rep(j, n) {
            if(i != j && !((s[i] != s[j] || t[i] != s[j]) && (s[i] != t[j] || t[i] != t[j]))) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}