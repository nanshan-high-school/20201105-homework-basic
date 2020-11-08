#include <iostream>
using namespace std;

int main() {
    int C;
    int N;
    cin >> C >> N;
    
    int P[C];
    for (int i = 0; i < C; i++) {
        cin >> P[i];
    } 

    int the_team_num = 1;
    int max_team_num;
    int the_power = 0;
    int max_power = -1;

    for (int i = 1; i <= C; i++) {
        the_power += P[C - i];
        if (i % N == 0) {
            if (the_power >= max_power) {
                max_power = the_power;
                max_team_num = the_team_num;
            }
            the_power = 0;
            the_team_num += 1;
            }
    }
    
    if (the_power != 0) {
        for (int i = ((the_team_num - 1)* N + 1); \
        i <= C; i++) {
            the_power = P[C - i];
            if (the_power >= max_power) {
                max_power = the_power;
                max_team_num = the_team_num;
            }
            the_power = 0;
            the_team_num += 1;
        }
    }
    cout << max_team_num << " " << max_power;
}
