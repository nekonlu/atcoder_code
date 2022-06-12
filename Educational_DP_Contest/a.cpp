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
    int N;
    cin >> N;
    vi h(N), dp(N, INFINITY);
    dp[0] = 0;
    rep(i, N) cin >> h[i];

    dp[1] = abs(h[0] - h[1]);

    srep(i, 2, N) {
        if((dp[i - 1] + abs(h[i - 1] - h[i])) <= (dp[i - 2] + abs(h[i - 2] - h[i]))) {
            dp[i] = dp[i - 1] + abs(h[i - 1] - h[i]);
        } else {
            dp[i] = dp[i - 2] + abs(h[i - 2] - h[i]);
        }
    }

    cout << dp[N - 1] << endl;


}