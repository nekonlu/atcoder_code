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
    int n, m, k;
    cin >> n >> m >> k;

    vvi dp(n + 1, vi(k + 1));
    dp[0][0] = 1;

    srep(i, 1, n + 1) {
        rep(j, k + 1) {
            srep(b, 1, m + 1) {
                if(j - b >= 0) dp[i][j] += dp[i - 1][j - b];
                dp[i][j] %= 998244353;
            }
        }
    }

    ll total = 0;

    rep(i, k + 1) {
        total += dp[n][i];
        total %= 998244353;
    }

    cout << total << endl;
}