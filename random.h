#ifndef APPROXIMATE_PI_RANDOM_H
#define APPROXIMATE_PI_RANDOM_H


#include <math.h>

class random {

private:
    int x;
    int y;
    int z;

public:
    random(int initX, int initY, int initZ):
    x(initX), y(initY), z(initZ)
    {}

    float getDouble() {
        float tmp;
        double intpart;
        x = 171*(x%177) - 2*(x/177);
        if (x < 0) {
            x += 30269;
        }
        y = 172*(y%176) - 35*(y/176);
        if (y < 0) {
            y += 30307;
        }
        z = 170*(z%178) - 63*(z/178);
        if (z < 0) {
            z += 30323;
        }
        tmp = x/30269.0 + y/30307.0+z/30323.0;
        modf(tmp, &intpart); // This assigns the integer part by reference. It returns the fraction part.
        return tmp - intpart;
    }

};


#endif //APPROXIMATE_PI_RANDOM_H
