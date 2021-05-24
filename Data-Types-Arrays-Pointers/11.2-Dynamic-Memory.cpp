#include <iostream>
using namespace std;

int main() {
    int n, x, max;
    cin >> n; //size of the array
    if (0<x) cin >> max;
    for (int i=1; i<n; ++i) {
        cin >> x;
        if (max<x) max = x;
    }
    cout << max;
    return 0;
}
