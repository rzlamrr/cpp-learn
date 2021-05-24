#include <iostream>
using namespace std;

int main() {
    int rows = 6, cols = 6;

    float matrix[rows][cols] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
    };

    for(int x=0; x<=5; x++) {
        for(int y=0; y<=5; y++){
            matrix[x][y] = 1;
            cout << matrix[x][y];
        }
        cout << endl;
    }
	return 0;
}
