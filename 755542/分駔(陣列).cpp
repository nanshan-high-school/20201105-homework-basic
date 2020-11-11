#include <iostream>
using namespace std;
int main() {
    int N = 0, C = 0, team = 1, max_num = -1, max_team = 0, group = 0, num = 0;
    int P[100]= {0};

    cin >> C >> N;
    for (int i = 1; i <= C; i++) {
        cin >> P[C - i];
    }

    for (int i = 0; i < C; i++) {
        group += P[i];
        if ((i + 1) % N == 0) {
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
