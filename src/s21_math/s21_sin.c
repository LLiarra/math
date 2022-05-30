//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_sin(double x) {
  int circle;
  double result = 0;
  if (x == s21_POSITIVE_INF || x == s21_NEGATIVE_INF) {
    result = s21_NAN;
  } else {
    circle = x / (2 * s21_M_PI);
    x = x - 2 * s21_M_PI * circle;
    const double eps = s21_EPS;
    double row_member = x;
    int n = 1;
    while (s21_fabs(row_member) > eps) {
      result = result + row_member;
      n = n + 2;
      row_member = -row_member * x * x / (n * (n - 1));
    }
  }
  return result;
}
