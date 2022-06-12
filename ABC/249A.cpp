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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int tn = 0, an = 0;
    int td = 0, ad = 0;

    srep(i, 1, x + 1) {
        if(!(i >= a + 1 + tn * (a + c) && i <= a + c + tn * (a + c))) {
            td += b;
        }
        if(i == (a + c) * (tn + 1)) tn++;

        if(!(i >= d + 1 + an * (d + f) && i <= d + f + an * (d + f))) {
            ad += e;
        }
        if(i == (d + f) * (an + 1)) an++;
    }

    if(td > ad) {
        cout << "Takahashi" << endl;
    } else if(td < ad) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
}