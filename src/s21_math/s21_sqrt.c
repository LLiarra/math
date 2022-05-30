//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_sqrt(double x) {
    long double result = s21_NAN;
    if (x >= 0 && x != s21_POSITIVE_INF) {
        result = 1.0;
        for (double square = 0; (square - x) != 0;) {
            //  "Итерационная формула Герона (преобразованный метод Ньютона)"
            result = (result + (x / result)) / 2;

            square = result * result;
        }
    }
    if (x == 0) {
        result = 0;
    }
    if (x == 1.0/0.0) {
        result = s21_POSITIVE_INF;
    }
    if (x == -1.0/0.0) {
        result = s21_NAN;
    }
    return result;
}
