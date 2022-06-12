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
    vi a(n * 2 + 1, 0);
    int c = 2 * n + 1;
    rep(i, c) {
        rep(j, c) {
            if(a[j] == 0) {
                cout << j + 1 << endl;
                a[j] = 1;
                break;
            }
        }

        int aoki;
        cin >> aoki;


        if(aoki == 0) {
            return 0;
        }

        a[aoki - 1] = 1;
    }
}