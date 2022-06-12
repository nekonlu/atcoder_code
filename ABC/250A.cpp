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
    int h, w, r, c;
    cin >> h >> w >> r >> c;

    int ans = 0;

    if(r - 1 >= 1) ans++;
    if(r + 1 <= h) ans++;
    if(c - 1 >= 1) ans++;
    if(c + 1 <= w) ans++;

    cout << ans << endl;
}