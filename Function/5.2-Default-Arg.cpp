#include <iostream>
#include <string>
using namespace std;

//complete the function with one default argument
void printOrder(string a) {
    cout << "Black tea" << endl;
    cout << a;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;
    
    printOrder(friendOrder);
    
    return 0;
}
