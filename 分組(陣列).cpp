#include <iostream>
using namespace std;
int main() {
    int n = 0, c = 0, team = 1, max_num = -1, max_team = 0, group = 0, num = 0;
    int P[100]= {0};

    cin >> c >> n;
    for (int i = 1; i <= c; i++) {
        cin >> P[c - i];
    }

    for (int i = 0; i < c; i++) {
        group += P[i];
        if ((i + 1) % n == 0) {
            if (max_num <= group) {
                max_num = group;
                max_team = team;
            }
            group = 0;
            team++;
        }
    }

    if (group != 0) {
        if (max_num <= group) {
            max_num = group;
            max_team = team;
        }
    }

    cout << max_team << " " << max_num;
}
