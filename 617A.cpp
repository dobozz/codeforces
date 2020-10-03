#include <iostream>

using namespace std;

int main() {
    int x;
    int numSteps = 0;
    cin >> x;
    numSteps = x/5;
    if (x % 5 != 0) {
        numSteps++;
    }
    cout << numSteps << endl;
    return 0;
}