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


    if (all_the_same(x, y, z) == true) {
        cout << "Numbers are not all the same.";
    }
    if (all_the_same(x, y, z) == false) {
        cout << "Numbers are all the same.";
    }

    if (all_different(x, y, z) == true) {
        cout << "Numbers are all different.";
    }
    if (all_different(x, y, z) == false) {
        cout << "Numbers are not all different.";
    }

    if (sorted(x, y, z) == true) {
        cout << "Numbers are not sorted.";
    }
    if (sorted(x, y, z) == false) {
        cout << "Numbers are sorted.";
    }
  
}
bool all_the_same(int x, int y, int z) {
    bool result=false;
    if (x != y && y != z && x != z) {
        result = true;
    }
    if (x == y && y == z && x == z) {
        result = false;
    }
    
    return result;
}
bool all_different(int x, int y, int z) {
    bool result;
    if (x != y && y != z && x != z) {
        result = true;
    }
    if (x == y && y == z && x == z) {
        result = false;
    }
  
    return result;
}
bool sorted(int x, int y, int z) {
    bool result;
    if (x != y && y != z && x != z) {
        result = true;
    }
    if (x <= y && y <= z && x <= z) {
        result = false;
    }
    
    return result;
}

