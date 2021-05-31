#include <iostream>
#include <string>
using namespace std;

//complete the function
void add(int a, int k) {
    cout << a + k << endl;
}
//overload it to sum doubles
void add(double v, double z) {
    cout << v + z;
}

int main() {
    
    //calling
    add(5,6);
    add(1.2, 6.5);
    
    return 0;
}
