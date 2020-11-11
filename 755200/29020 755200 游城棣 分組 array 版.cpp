#include <iostream>
using namespace std;

int main() {
    long competitor, howmanyhuman, grouping[100] = {0}, max = 0, themostmax = 0, max_label, compewithoutone;
    cin >> competitor >> howmanyhuman;
    for (int i = 0; i < competitor; i++)
    {
        cin >> grouping[i];
    }
    compewithoutone = competitor - 1;
    for (int i = 0; i < competitor / howmanyhuman + 1; i++)
    {
        max = 0;
        for (int n = 0; n < howmanyhuman && compewithoutone - n >= 0; n++)
        {
            max += grouping[compewithoutone - n];
        }
        if (max >= themostmax)
        {
            max_label = i + 1;
            themostmax = max;
        }
        compewithoutone -= howmanyhuman;
    } 
    cout << max_label << " " << themostmax; 
}
//this code is copyright
