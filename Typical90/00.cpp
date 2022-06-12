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
    vi t(n), x(n), y(n);
    rep(i, n) cin >> t[i] >> x[i] >> y[i];

    int currentX = 0, currentY = 0, currentT = 0;

    rep(i, n) {
        int mDistance = abs(currentX - x[i]) + abs(currentY - y[i]);
        if(mDistance <= t[i] - currentT) {
            if(mDistance % 2 == (t[i] - currentT) % 2) {
                currentX = x[i];
                currentY = y[i];
                currentT = t[i];
                continue;
            } else {
                cout << "No" << endl;
                return 0;
            }
        } else {
            cout << "No" << endl;
            return 0;
        }


    }

    cout << "Yes" << endl;
}