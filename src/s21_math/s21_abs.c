//  copyright 2022 GHOSTBUSTERS

#include "../s21_math.h"

int s21_abs(int x) {
  int result;
  if (x == -2147483648) {
    result = -2147483648;
  } else {
    result = x > 0 ? x : x * (-1);
  }
  return result;
}
