//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_asin(double x) {
    long double res = x;

    if (x != x) {
        res = x;
    } else {
        if (x > 1 || x < -1) {
            res = s21_NAN;
        } else {
            if (x >= 0 && x <= 0.5) {
                res = x + s21_pow(x, 3) / 6 + 3*s21_pow(x, 5) / 40 + 5*s21_pow(x, 7)/112
                + 35*s21_pow(x, 9)/1152
                + 63*s21_pow(x, 11)/2816 + 231*s21_pow(x, 13)/13312 + 143*s21_pow(x, 15)/10240
                + 5435*s21_pow(x, 17)/557056 + 12155*s21_pow(x, 19)/1245184 + 46189*(s21_pow(x, 21)/5505024)
                + 88179*s21_pow(x, 23)/12058524;
            } else {
                res = (s21_M_PI_2 - 2 * s21_asin(s21_sqrt((1-x)/2)));
            }
        }
    }
    return res;
}
