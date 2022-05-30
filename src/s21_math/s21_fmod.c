//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_fmod(double x, double y) {  //  В основе формулы лежит принцип, что x = i * y + r
    long double lx = x;
    long double ly = y;
    long double result;
    long long int integer;
    int znak = 1;  //  знак результата зависит только от числителя

    if (ly == 0 || ly == __builtin_nanf("0x7fc00000")) {
        result = 0;
    } else if (lx == 1.0/0.0 || lx == -1.0/0.0) {
        result = s21_NAN;
    } else if (ly == 1.0/0.0 || ly == -1.0/0.0) {
        result = lx;
    } else {
        if (lx < 0) {
            znak = -1;
            lx = -lx;
        }
        if (ly < 0) {
            ly = -ly;
        }
        integer = lx / ly;
        result = lx - ly * integer;
        if (znak < 0) {
            result = -result;
        }
    }
  return result;
}
