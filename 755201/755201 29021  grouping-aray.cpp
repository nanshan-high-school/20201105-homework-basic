#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int P[100] = {0};
    for (int i = 0; i < A; i++) {
        cin >> P[i];
    }
    long sum, bestSum = 0, bestMark, counter = A - 1;
    for (int i = 0; i < A/B + 1; i++) {
        sum = 0;
        for (int j = 0; j < B; j++) {
            if (counter - j < 0) {
                break;
            }
            sum += P[counter - j];
        }
        if (sum >= bestSum) {
            bestMark = i + 1;
            bestSum = sum;
        }
        counter -= B;
    }
    cout << bestMark << " " << bestSum;
}
