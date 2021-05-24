#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cin >> seconds;
    cout << seconds << endl;
    for (seconds--; seconds >= 0; seconds >-1) {
        cout << seconds << endl;
        seconds--;
    }
    return 0;
}
