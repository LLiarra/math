//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

static long double s21_taylor_log(long double x) {
  long double temp = x;
  long double result = x;
  for (int i = 2; s21_fabs(temp) > s21_EPS; i++) {
    temp = (-1) * temp * (i - 1) * x / i;  //  ряд Тейлора для логарифма
    result += temp;
  }
  return result;
}

long double s21_log(double x) {
  long double result = 0;
  if (x <= 0.0) {
    exit(1);
  } else {
    int count = 0;
    if ((int)x > 9) {
      while ((int)x > 9) {
        x /= 10;
        count++;
      }
    }
    int count_two = 0;
    if (x >= 2) {
      while ((int)x >= 2) {
        x /= 2;
        count_two++;
      }
    }
    result = count * s21_M_LN10 + count_two * s21_M_LN2 + s21_taylor_log(x - 1);
  }
  return result;
}
