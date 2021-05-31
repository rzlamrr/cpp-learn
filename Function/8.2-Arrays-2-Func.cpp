#include <iostream>
#include <string>
using namespace std;

//complete the function
void winners(string arr[], int c, int n) {
    for (int x=n-1; x<=c; x+=n) {
    	cout << arr[x] << endl;
	}
}

int main() {

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);
    
    return 0;
}
