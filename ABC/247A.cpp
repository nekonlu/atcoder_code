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
    string s, t;
    cin >> s;

    t[0] = '0';
    t[1] = s[0];
    t[2] = s[1];
    t[3] = s[2];

    rep(i, 4) {
        cout << t[i];
    }
}