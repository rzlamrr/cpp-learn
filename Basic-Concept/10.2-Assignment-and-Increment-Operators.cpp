#include <iostream>
using namespace std;

int main() {
    int balance, withdraw, sisa;
    cin >> balance >> withdraw;

    sisa = balance - withdraw;
    cout << sisa;
    return 0;
}
