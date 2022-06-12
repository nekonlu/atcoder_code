// #define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define srep(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

vector<vector<int>> table = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
};

// 0 := Nothing
// 1 := Maru
// 2 := Batu
vector<vector<int>> marubatu = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
};

void tableDisplay();
int judge();

int main() {

    tableDisplay();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    rep(i, 9) {

        if(i % 2 == 0) {
            cout << "o's turn" << endl;
        } else {
            cout << "x's turn" << endl;
        }
        int yourTurn = -1;
        cin >> yourTurn;
        if(marubatu[yourTurn / 3][yourTurn % 3] == 0) {
            marubatu[yourTurn / 3][yourTurn % 3] = i % 2 + 1;
        } else {
            i--;
        }

        tableDisplay();
        if(judge() == 1) {
            cout << "o WIN!!!" << endl;
            return 0;
        } else if(judge() == 2) {
            cout << "x WIN!!!" << endl;
            return 0;
        }
        cout << endl << endl << endl << endl;
    }


}

void tableDisplay() {
    cout << "-------------------------------" << endl;
    rep(i, 3) {
        cout << "|         |         |         |" << endl;
        cout << "|";
        rep(j, 3) {

            if(marubatu[i][j] == 1) {
                cout << "    o    |";
            } else if(marubatu[i][j] == 2) {
                cout << "    x    |";
            } else {
                cout << "   -" << table[i][j] << "-   |";
            }

        }
        cout << endl << "|         |         |         |";
        cout << endl << "-------------------------------" << endl;
    }
}

int judge() {
    rep(i, 3) {
        if(marubatu[i][0] == marubatu[i][1] && marubatu[i][1] == marubatu[i][2]) return marubatu[i][0];
        else if(marubatu[0][i] == marubatu[1][i] && marubatu[1][i] == marubatu[2][i]) return marubatu[0][i];
    }
    if(marubatu[0][0] == marubatu[1][1] && marubatu[1][1] == marubatu[2][2]) return marubatu[0][0];
    else if(marubatu[0][2] == marubatu[1][1] && marubatu[1][1] == marubatu[2][0]) return marubatu[0][2];
    return 0;
}

