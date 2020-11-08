#include <iostream>
using namespace std;

int main() {
    int C, N;
    cin >> C >> N;
    int P[100] = {0};
    for (int i = 0; i < C; i++) {
        cin >> P[i];
    }
    long sum, bestSum = 0, bestMark, counter = C - 1;
    for (int i = 0; i < C/N + 1; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            if (counter - j < 0) {
                break;
            }
            sum += P[counter - j];
        }
        if (sum >= bestSum) {
            bestMark = i + 1;
            bestSum = sum;
        }
        counter -= N;
    }
    cout << bestMark << " " << bestSum;
}
