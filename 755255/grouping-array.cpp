#include <iostream>
using namespace std;
int main() {
    int C, N;
    cin >> C >> N;
    int P[C];
    int addition = 0;
    int i, x;
    int max = -1;
    int count = 0;
    int count_max = 0;
    for (i = 0;i < C;i++) {
        cin >> P[i];
    }

    while (true) {
        for (int j = 0;j < N;j++) {
            i--;
            addition += P[i];
        }
        count++;
        if (addition >= max) {
            max = addition;
            count_max = count;
        }
        addition = 0;
        x = i % N;
        if (i / N == 0) {
            for (int j = 0;j < x ;j++) {
                i--;
                addition += P[i];
            }
            count++;
            if (addition >= max) {
                max = addition;
                count_max = count;
            }
        }
        if (i == 0) {
            break;
        }
    }

    cout << count_max << " " << max;
}
