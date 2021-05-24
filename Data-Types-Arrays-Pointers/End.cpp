#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }

    float muda, harga;
    muda = ages[0];
    for (int x = 1; x < 5; x++) {
        if (ages[x] < muda) {
        	muda = ages[x];
		}
    }

    harga = 50 - muda / 100 * 50;
    cout << harga;
    return 0;
}
