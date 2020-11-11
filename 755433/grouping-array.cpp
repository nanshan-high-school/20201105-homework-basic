#include <iostream>
using namespace std;

int main() {
    int c, n;       // c 幾個參賽者
    cin >> c >> n;  // n 一組幾人
    int p[c - 1];   // p 每人戰力

    for (int i = 0; i < c; i++) { 
        cin >> p[i];
    }
    
    int power = 0, maxPower = -1, team = 0;
    for (int i = 1; i <= c; i++) {
        power += p[c - i];
        if (i % n == 0) {
            if (power >= maxPower) {
                maxPower = power;
                power = 0;
                team += 1;
            }
        }
    }
    if (c % n != 0) {
        if (power > maxPower) {
            maxPower = power;
            team += 1;
        }
    }
    cout << team << " " << maxPower;
}
