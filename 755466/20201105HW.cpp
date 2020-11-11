#include <iostream>
using namespace std;
int main() {
    int C, N, i;
    cout << "" << "";
    cin >> C >> N;

    int P[C], Number;

    for (i = 1; i <= C; i++) {
        cin >> P[C - i];
    }


/*檢查array
    int LEN = C;
    for(int i = 0; i < LEN; i++) {
        cout << P[i] << " "; 
    }
    cout << "\n";
*/

    int maxNum = -1, maxTeam;
    int totalNumber = 0, team = 1;

    for (i = 0; i < C; i++) {
        totalNumber += P[i];
        if ((i + 1) % N == 0) {
            if (maxNum <= totalNumber) {
                maxNum = totalNumber;
                maxTeam = team;
            }
            totalNumber = 0;
            team += 1;
        }
    }

    if (totalNumber != 0) {
        if (maxNum <= totalNumber) {
                maxNum = totalNumber;
                maxTeam = team;
            }
    }
    cout << maxTeam << " " << maxNum;

}
