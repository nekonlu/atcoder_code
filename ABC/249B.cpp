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
    string s;
    cin >> s;

    bool A = false, a = false;

    rep(i, s.size()) {
        rep(j, s.size()) {
            if(i == j) continue;
            if(s[i] == s[j]){
                cout << "No" << endl;
                return 0;
            }
        }
        if(s[i] >= 'a') a = true;
        if(s[i] <= 'Z') A = true;
    }

    if(a && A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}