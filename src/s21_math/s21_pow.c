//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

long double s21_pow(double base, double exp) {
  long double result = 1;

  if ((base == -1 && (exp == s21_NEGATIVE_INF || exp == s21_POSITIVE_INF))) {
    result = s21_NAN;
  } else if ((base != base && exp == 0) || (base == 1 && exp != exp)
    || (base == 0 && exp == 0) || (base < 0 && exp == 0)) {
    result = 1;
  } else if ((base == 0 && exp > 0) || (base == s21_POSITIVE_INF && exp < 0)
    || (base == s21_NEGATIVE_INF && exp < 0)) {
    result = 0;
  } else if ((base == 0 && exp < 0) || (base == s21_POSITIVE_INF && exp > 0)) {
    result = s21_POSITIVE_INF;
  } else {
    result = s21_exp(exp * s21_log(base));
  }
  return result;
}
