#include <iostream>
using namespace std;

int main() {
    int h, m, set= 45;
    cin >> h >> m;
    if (h < 0 || h > 23) return 0;
    if (m < 0 || m > 59) return 0;
    m = m - set;
    if (m < 0) {
        m += 60;
        h -= 1;
        if (h < 0) h += 24;
    }
    cout << h << ' ' << m;
}