#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int odd = (N + 1) / 2;
        int even = N / 2;

        int total_time = (odd * B) + (even * A);
        cout << total_time << endl;
    }

    return 0;
}
