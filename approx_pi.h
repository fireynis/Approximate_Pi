//
// Created by jeremy on 10/19/2015.
//

#ifndef APPROXIMATE_PI_APPROX_PI_H
#define APPROXIMATE_PI_APPROX_PI_H


#include <math.h>

class approx_pi {

public:

    static bool in_circle(double x, double y) {
        if ((pow((x - 0.5), 2)+pow((y-0.5), 2)) < pow(0.5, 2)) {
            return true;
        } else {
            return false;
        }
    }

};


#endif //APPROXIMATE_PI_APPROX_PI_H
