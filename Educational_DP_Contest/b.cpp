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
    int N, K;
    cin >> N >> K;
    vi dp(N, INT_MAX), h(N);
    rep(i, N) cin >> h[i];
    dp[0] = 0;

    srep(i, 1, N) {
        srep(j, 1, K + 1) {
            if(i - j >= 0) {
                if(dp[i - j] + abs(h[i] - h[i - j]) <= dp[i]) dp[i] = dp[i - j] + abs(h[i] - h[i - j]);
            }
        }
    }

    cout << dp[N - 1] << endl;
}