//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

static long double s21_t_series(long double  x) {
  long double sequence = x;
  long double temp = x;
  long double x_pow = x * x;

  int i = 1;
  while (s21_fabs(sequence) > s21_EPS) {
    sequence = (-1) * sequence * x_pow * (2 * i - 1) / (2 * i + 1);
    i++;
    temp += sequence;
  }
  return temp;
}

long double s21_atan(double x) {
  long double result = 0;
  long double temp = s21_fabs(x);

  if (temp >= 0 && temp < 7.0 / 16.0) {
    result = s21_t_series(temp);

  } else if (temp >= 7.0 / 16.0 && temp < 11.0 / 16.0) {
    result = s21_t_series(0.5) + s21_t_series((temp - 0.5) / (1.0 + temp / 2.0));

  } else if (temp >= 11.0 / 16.0 && temp < 19.0 / 16.0) {
    result = s21_M_PI_4 + s21_t_series((temp - 1.0) / (1.0 + temp));

  } else if (temp >= 19.0 / 16) {
    result = s21_M_PI_2 + s21_t_series(1.0 / temp) * (-1);
  }

  return x >= 0 ? result : -result;
}
