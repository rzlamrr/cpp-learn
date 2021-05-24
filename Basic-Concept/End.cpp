#include <iostream>
using namespace std;

int main() {
    int penumpang, sisa;
    cin >> penumpang;

    if ( penumpang > 50) {
        sisa = penumpang % 50;
        sisa = 50 - sisa;
    }
    else {
        sisa = 50 - penumpang ;
    }

    cout << sisa;
    return 0;
}
