
#include <iostream>
using namespace std;

int main() {
    int C, N = 0;
    cin >> C >> N;
    int P[100] = {};

    for (int i = C - 1; i >= 0; i--) {
        cin >> P[i];
    }

/*測試:
    for (i = C; i >= 0; i--) {
        cout << "(" << P[i] << "," << i << ")";
    }
*/

    int maxTeamValue = -1;
    int maxTeamNumber = 0;
    int nowTeamNumber = 1;
    int nowTeamValue = 0;

    for (int i = 1; i <= C; i++) {
        nowTeamValue += P[i-1];
        if (i % N == 0) {
            if (nowTeamValue >= maxTeamValue) {
                maxTeamValue = nowTeamValue;
                maxTeamNumber = nowTeamNumber;
            }
            nowTeamValue = 0;
            nowTeamNumber ++;
        }
    }

    if (nowTeamValue != 0) {
        for (int i = ((nowTeamNumber - 1)* N + 1); i <= C; i++)
        nowTeamValue += P[C - i];
        if (nowTeamValue >= maxTeamValue) {
            maxTeamValue = nowTeamValue;
            maxTeamNumber = nowTeamNumber;
        }
        nowTeamValue = 0;
        nowTeamNumber ++;
    }

    cout << maxTeamNumber << " " << maxTeamValue;
}

/*
C (1 ≤ C ≤ 100) -> 代表幾個參賽者和 
N (1 ≤ N ≤ 8) -> 一組有幾人
輸入一串數字 P，以空白間隔共 C 個數字（P1 到 PC），為參賽者依分組序列將個別戰力指數組成的數字。
*/

