#include <iostream>
using namespace std;

int max(int num1, int num2) {
    //complete the function
    if (num1 == num2) {
        cout << num1;
    }
    if (num1 > num2) {
        cout << num1;
    }
    if (num2 > num1){
        cout << num2;
    }
}

int main() {
     int first;
    cin >> first;
    int second;
    cin >> second;
    
     max(first, second );
    
    return 0;
}
