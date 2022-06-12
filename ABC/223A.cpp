#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define srep(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    int x, y, cnt = 0;
    cin >> x >> y;

    if(y <= x) {
        cout << cnt << endl;
        return 0;
    }

    x = y - x;

    while(x > 0){
        x -= 10;
        cnt++;
    }

    cout << cnt << endl;
}