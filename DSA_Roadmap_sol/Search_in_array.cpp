#include <iostream>
using namespace std;

string fun(int A[], int n, int x){
    for(int i = 0; i < n; i++){
        if(A[i] == x)
            return "YES";
    }
    return "NO";
}

int main() {
    int n, x;
    cin >> n >> x;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    cout << fun(A, n, x) << endl;

    return 0;
}
