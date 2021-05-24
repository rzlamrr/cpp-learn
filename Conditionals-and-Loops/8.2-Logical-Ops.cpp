#include <iostream>
using namespace std;

int main() {
    int vision, height;
    cin >> vision >> height;
    if (vision == 100 && height >= 62 && height <= 75) {
        cout << "passed";
    }
    else {
        cout << "failed";
    }
	return 0;
}
