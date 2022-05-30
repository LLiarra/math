//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_cos(double x) {
  int circle;
  double result = 1;
  if (x == s21_POSITIVE_INF || x == s21_NEGATIVE_INF) {
    result = s21_NAN;
  } else {
    circle = x / (2 * s21_M_PI);
    x = x - 2 * s21_M_PI * circle;
    const double eps = s21_EPS;
    double row_member = 1;
    int n = 0;
    int count = 1;
    while (s21_fabs(row_member) > eps) {
      n = n + 2;
      row_member = row_member * x * x / (n * (n - 1));
      if (count % 2 != 0)
        result = result - row_member;
      else
        result = result + row_member;
      count++;
    }
  }
  return result;
}
