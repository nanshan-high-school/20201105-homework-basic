#include <iostream>

using namespace std;

int main() {
    int C, N;

    cin >> C >> N;

    int P[C+1];

    for(int i=C ; i >= 1 ; i --) {
        cin >> P[i];
    }

    int group, max=0, flag = C;
    long long sum=0;

    for(int i=1 ; i<=C ; i++) {

        sum += P[i];

        if(i % N == 0){
            if(max <= sum) {
                max = sum;
                group = i / N;
            }
        sum = 0;
        }
    }

    cout << group << " " << max << endl ;
}
