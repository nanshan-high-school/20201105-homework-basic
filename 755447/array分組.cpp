#include <iostream>
using namespace std;
int main() {
    int C, N;
    cout << "" << "";
    cin >> C >> N;
    int P[C];

    for (int i = 1; i <= C; i++) {
        cin >> P[C - i];
    }

    int maxTeamValue = -1, maxTeam;
    int nowTeamValue = 0, nowTeam = 1;
     
    for (int i = 0; i < C; i++) {
        nowTeamValue += P[i];
        if ((i + 1) % N == 0) {
            if (maxTeamValue <= nowTeamValue) {
                maxTeamValue = nowTeamValue;
                maxTeam = nowTeam;
            }
            nowTeamValue = 0;
            nowTeam += 1;
        }
        
    }
 
    if (nowTeamValue != 0) {
        if (maxTeamValue <= nowTeamValue) {
            maxTeamValue = nowTeamValue;
            maxTeam = nowTeam;
        }
    }
    cout << maxTeam << " " << maxTeamValue;
}
