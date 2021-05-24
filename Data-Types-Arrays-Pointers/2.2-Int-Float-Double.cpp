#include <iostream>
using namespace std;

int main() {
    float temp;
    cin >> temp;
    if ( 36.1 < temp && temp < 36.9) {
        cout << "OK";
    }
    else {
        cout << "Not OK";
    }
}
