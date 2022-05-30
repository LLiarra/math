//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_ceil(double x) {
    double result;
    if (x != x) {
     result = s21_NAN;
    } else if (x == s21_POSITIVE_INF) {
        result = s21_POSITIVE_INF;
    } else if (x == s21_NEGATIVE_INF) {
        result = s21_NEGATIVE_INF;
    } else {
        if (x > 0) {
            result = ((int)x == x ? (int)x : (int)(x + 1));
        }
        if (x < 0) {
            result = (int)x;
        }
        if (x == 0) {
            result = 0;
        }
    }
    return result;
}
