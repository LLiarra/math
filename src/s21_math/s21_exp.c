//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_exp(double x) {
  long double temp = 1.0;
  long double result = 1.0;
  long double x1 = s21_fabs(x);


  for (int i = 1; temp > s21_EPS; i++) {
    temp *= x1 / i;
    result += temp;
    if (result >= s21_MAX_DOUBLE) {
      result = s21_POSITIVE_INF;
      break;
    }
  }

  return x < 0 ? 1 / result : result;
}
