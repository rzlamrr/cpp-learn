#include <iostream>
using namespace std;

void toMinutes(int hours) {
    cout << hours * 60;
}

int main() {
    int hours;
    cin >> hours;

    toMinutes(hours);

    return 0;
}
