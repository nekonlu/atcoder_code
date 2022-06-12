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
    int n, x = 0, y = 0;
    cin >> n;
    string t;
    cin >> t;

    int direction = 0;

    rep(i, n) {
        if(t[i] == 'S'){
            if(direction % 4 == 0) {
                x += 1;
            } else if(direction % 4 == 1) {
                y -= 1;
            } else if(direction % 4 == 2) {
                x -= 1;
            } else if(direction % 4 == 3) {
                y += 1;
            }
        } else {
            direction += 1;
        }
    }

    cout << x << " " << y << endl;
}