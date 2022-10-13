//Lab7-2
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool all_the_same(int x, int y, int z);
bool all_different(int x, int y, int z);
bool sorted(int x, int y, int z);
int main() {
    int x;
    int y;
    int z;

    cout << "Enter three numbers or Q to quit: ";
    cin >> x >> y >> z;
    cout << endl;

    if (x != y && y != z && x != z) {
        cout << "Numbers are not all the same.\n";
        cout << "Numbers are all different.\n";
        cout << "Numbers are not sorted." << endl;
    }
    if (x == y && y == z && x == z) {
        cout << "Numbers are all the same.\n";
        cout << "Numbers are not all different.\n";
        cout << "Numbers are sorted."<< endl;
    }
    else if (cin.fail()) return 0;
    
    return 0;
    }
