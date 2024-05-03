#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int step = 1, start_x = -5, end_x = 5;
    cout << "X" << '\t' << "Y" << endl;
    for (int i = start_x; i <= -3; i += step) {
        cout << i << '\t' << 1 << endl;
    }
    for (int i = -3; i <= -1; i += step) {
        cout << i << '\t' << 4 - pow(i + 1, 2) << endl;
    }
    for (int i = -1; i <= 2; i += step) {
        cout << i << '\t' << -2 << endl;
    }
    for (int i = 2; i <= end_x; i += step) {
        cout << i << '\t' << i - 4 << endl;
    }
    return 0;
}