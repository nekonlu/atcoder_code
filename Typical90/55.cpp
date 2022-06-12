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
    int n, p, q;
    cin >> n >> p >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    int total = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                for(int l = 0; k < n; l++) {
                    for(int m = 0; m < n; m++) {
                        if((a[i] % p) * (a[j] % p) * (a[k] % p) * (a[l] % p) * (a[m] % p) == q) total++;
                        cout << i << j << k << l << m << endl;
                    }
                }
            }
        }
    }

    cout << total << endl;
}