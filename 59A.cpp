#include <iostream>

using namespace std;

int main() {
    string s;
    int upperCount = 0;
    int lowerCount = 0;
    bool toCapitalize = false;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++) {
        if (s[i] > 96) {
            lowerCount++;
        } else {
            upperCount++;
        }
    }
    if (lowerCount == upperCount || lowerCount > upperCount) {
        for (int i = 0; i < l; i++) {
            if (s[i] < 96) {
                s[i] = s[i] + 32;
            }
        }
    }
    if (lowerCount < upperCount) {
        for (int i = 0; i < l; i++) {
            if (s[i] > 96) {
                s[i] = s[i] - 32;
            }
        }   
    }
    cout << s << endl;
    return 0;
}