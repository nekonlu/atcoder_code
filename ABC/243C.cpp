// #define _GLIBCXX_DEBUG
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
    vi x(n), y(n);
    string s;
    rep(i, n) cin >> x[i] >> y[i];
    cin >> s;

    map<int, vi> mp;
    rep(i, n) {
        mp[y[i]].push_back(i);
    }

    for(auto m : mp) {

        vector<pair<int, char>> xc;
        for(int i = 0; i < m.second.size(); i++) {
            xc.push_back(make_pair(x[m.second[i]], s[m.second[i]]));
        }

        sort(xc.begin(), xc.end());

        for(int i = 1; i < m.second.size(); i++) {
            if(xc[i - 1].second == 'R' && xc[i].second == 'L') {
                cout << "Yes" << endl;
                return 0;
            }
        }


    }


    cout << "No" << endl;
}