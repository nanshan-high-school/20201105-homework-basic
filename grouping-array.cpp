#include<iostream>
using namespace std;

int main () {
    int c, p[c], n;
    cin >> c >> n;
    for(int i = 0; i <= c; i++) {
        cin >> p[c - 1];
    }

    int maxteamvalue = -1, nowteamvalue, output;

    for(int i = 3; i <= (c/3); i = i+3) {
        if(c / 3 == 0) {
        nowteamvalue = p[i - 3] + p[i - 2] + p[i - 1];
        if(nowteamvalue >= maxteamvalue) {
            maxteamvalue = nowteamvalue;
            output = i/3;
        }
        }else if ((i - 2) / 3 == 0) {
            nowteamcvalue = p[i - 3]
            if(nowteamvalue >= maxteamvalue) {
            maxteamvalue = nowteamvalue;
            output = i/3;
        }else {
            nowteamcvalue = p[i - 2]
            if(nowteamvalue >= maxteamvalue) {
            maxteamvalue = nowteamvalue;
            output = i/3;
    }
    cout << maxteamvalue << output;
}
