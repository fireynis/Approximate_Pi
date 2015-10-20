#include <iostream>
#include "random.h"

using namespace std;

int main() {
    random nums(5, 10000, 3000);
    for (int i = 1; i < 1000; ++i) {
        cout << "[" << i << "]" << " = " << nums.getFloat() << endl;
    }
}