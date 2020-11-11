#include <iostream>
using namespace std;

int main() {
    int C, N;
    cin >> C >> N;
    int P[i];

    for (int i = 0 ; i < C ; i++) {
        cin >> P[i];
    }

    int sum, max = 0, GroupNum, count = C - 1;
    for (int i = 0; i < C/N + 1; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            if (count - j < 0) {
                break;
            }
            sum += P[count - j];
        }
        if (sum >= max) {
            GroupNum = i + 1;
            max = sum;
        }
        count -= N;
    }
    
    cout << GroupNum << " " << max;
}
