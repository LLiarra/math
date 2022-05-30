//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_acos(double x) {
    long double res = 0.0;
    if (x > 1 || x < -1) {
        res = s21_NAN;
    } else {
        res = s21_M_PI_2 - s21_asin(x);
    }
    return res;
}
