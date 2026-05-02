#include <iostream>

using namespace std;

int main() {

    int t, sum = 0;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        sum += i;
    }

    cout << sum;

    return 0;
}
