#include <iostream>
#include <algorithm>
#include<string>
using namespace std; 

int main() {
    int c, n; 
    cin >> c >> n; //參加人數 & 每組幾人
    
    int a[c];
    for (int i = 0; i < c; i++) {
        cin >> a[i]; //戰力值
    }

    int maxTeam = -1;
    int maxPower = -1;
    int totalPower = 0;

    int j = 0;
    int totalTeam = 0;

    for (int i = c - 1; i >= 0; i--) {
        j ++;
        totalPower += a[i];

        if (j == n || i == 0) {
            totalTeam ++;
            if (totalPower >= maxPower) {
                maxPower = totalPower;
                maxTeam = totalTeam;
            }

            j = 0;
            totalPower = 0;
        }
    } 

    cout << maxTeam << " " << maxPower;
}
