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
    int n;
    cin >> n;
    vi a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    int a1 = 0, a2 = 0;

    rep(i, n) {
        if(a[i] == b[i]) a1++;
        rep(j, n) {
            if(a[i] == b[j] && i != j) a2++;
        }
    }

    cout << a1 << endl << a2 << endl;
}