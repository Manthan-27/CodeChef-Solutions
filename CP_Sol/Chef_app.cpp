#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int S, A, B, C;
        cin >> S >> A >> B >> C;

        int unused = S - (A + B);

        if (unused >= C) {
            cout << 0 << endl;
        } else if ((S - A >= C) || (S - B >= C)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}
