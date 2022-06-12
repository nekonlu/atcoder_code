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
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    map<string, int> ms;

    int mss = ms.size();

    cout << 1 << endl;

    rep(i, n) {
        ms.insert(make_pair(s[i], 0));
        if(i >= 1 && mss != ms.size()) {
            cout << i + 1 << endl;
        }
        mss = ms.size();
    }
}