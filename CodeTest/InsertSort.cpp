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
    vi x(n), y(n, INT_MAX);
    rep(i, n){
        cin >> x[i];
    }

    rep(i, n){
        rep(j, n){
            if(x[i] <= y[j]) {
                y.insert(y.begin() + j, x[i]);
                break;
            }
        }
        rep(j, n){
            cout << y[j] << " ";
        }
        cout << endl;
    }

//    rep(i, n){
//        cout << y[i] << " ";
//    }
}