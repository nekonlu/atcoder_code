#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define srep(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    int n;
    cin >> n;
    vi a(4 * n - 1);
    vi count(n);
    rep(i, 4 * n - 1) {
        cin >> a[i];
    }

    int cnt = 0;

    rep(i, 4 * n - 1) {
        count[a[i] - 1] += 1;
    }

    rep(i, n) {
        if(count[i] != 4) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}