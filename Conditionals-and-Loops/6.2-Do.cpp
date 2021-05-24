#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 3;
    float totalPrice, x;
    int disc = 15;
    do {
    	cin >> x;
    	totalPrice = x * disc / 100;
    	cout << totalPrice << endl;
    	purchaseAmount--;
	} while ( 0 < purchaseAmount);
    return 0;
}
