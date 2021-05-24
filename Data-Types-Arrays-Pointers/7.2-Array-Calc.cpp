#include <iostream>
using namespace std;

int main() {
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};

    double a, cost;
    int p; //discount
    // int cost = a-(a*p)/100;
    cin >> p;
    for (int i= 0; i<11; i++)
    {
        a = items[i];
        cost = a - (a * p) / 100;
        if (i) cout << " ";
        cout << cost; // << endl;
    }
    return 0;
}
