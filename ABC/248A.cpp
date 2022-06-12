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
    string s;
    cin >> s;
    vi a(10);
    rep(i, 9) {
        a[s[i] - '0'] = 1;
    }



    rep(i, 10) {
        if(a[i] == 0) cout << i << endl;
    }
}