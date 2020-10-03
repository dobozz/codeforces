#include <iostream>

using namespace std;

int main() {
    int num, subtract;
    cin >> num >> subtract;
    for (int i = 0; i < subtract; i++) {
        if (num % 10 == 0) {
            num = num / 10;
        } else {
            num -= 1;
        }
    }
    cout << num << endl;
    return 0;
}