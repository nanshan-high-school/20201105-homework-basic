#include <iostream>
using namespace std;

int main() {
    int C, N;
    cin >> C >> N;
    
    int P[C];
    int i;
    int nowTeamValue = 0;
    int maxTeamValue = -1;
    int nowTeamCount = 0;
    int maxTeamNum = 0;

    for (i = 0; i < C; i++) {
        cin >> P[i];
    }

    while (true) {
        for (int j = 0; j < N; j++) {
            i--;
            nowTeamValue += P[i];
        }

        nowTeamCount++;
        if (nowTeamValue >= maxTeamValue) {
            maxTeamValue = nowTeamValue;
            maxTeamNum = nowTeamCount;
        }

        nowTeamValue = 0;
        if (i / N == 0) {
            for (int j = 0; j < (i % N); j++) {
                i--;
                nowTeamValue += P[i];
            }

            nowTeamCount++;
            if (nowTeamValue >= maxTeamValue) {
                maxTeamValue = nowTeamValue;
                maxTeamNum = nowTeamCount;
            }
        }

        if (i == 0) {
            break;
        }    
    }
    
    cout << maxTeamNum << " " << maxTeamValue;
}
