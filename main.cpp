#include <iostream>
#include "random.h"
#include "approx_pi.h"

using namespace std;

int main() {
    random nums(5, 10000, 3000);
    float count = 0, hit = 0;

    for (int i = 0; i < 32; ++i) {
        for (int j = 0; j < 1000; ++j) {
            if (approx_pi::in_circle(nums.getDouble(), nums.getDouble())) {
                hit++;
                count++;
            } else {
                count++;
            }
        }
        cout << 4.0*(hit/count) << endl;
    }
}