#include <iostream>
using namespace std;

int anjay(int n) {
	int balik = 0, anu;
	while(n != 0) {
    	anu = n%10;
    	balik = balik * 10 + anu;
    	n/= 10;
	}
	return balik;
}

bool isPalindrome(int x) {
    //complete the function
	if (x == anjay(x)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout << n <<" is a palindrome";
    }
    else {
        cout << n <<" is NOT a palindrome";
    }
    return 0;
}
