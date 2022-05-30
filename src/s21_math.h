//  copyright 2022 GHOSTBUSTERS

#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdlib.h>

#define s21_M_E         2.71828182845904523536
#define s21_M_LOG2E     1.44269504088896340736
#define s21_M_LOG10E    0.434294481903251827651
#define s21_M_LN2       0.693147180559945309417
#define s21_M_LN2_2     0.346573590279973
#define s21_M_LN10      2.30258509299404568402
#define s21_M_PI        3.14159265358979323846
#define s21_M_PI_2      1.57079632679489661923
#define s21_M_PI_3      1.0471975511966
#define s21_M_PI_4      0.785398163397448309616
#define s21_M_PI_6      0.523598775598299
#define s21_M_1_PI      0.318309886183790671538
#define s21_M_2_PI      0.636619772367581343076
#define s21_M_2_SQRT_PI 1.12837916709551257390
#define s21_M_SQRT2     1.41421356237309504880
#define s21_M_SQRT1_2   0.707106781186547524401
#define s21_M_SQRT_3    1.732050807569



#define s21_NAN __builtin_nanf("0x7fc00000")
#define s21_MAX_DOUBLE 1.7976931348623157E+308
#define s21_POSITIVE_INF 1.0/0.0
#define s21_NEGATIVE_INF -1.0/0.0
#define s21_EPS 1e-16


int s21_abs(int x);                             //  done
long double s21_acos(double x);                 //  peverell
long double s21_asin(double x);                 //  boyceing
long double s21_atan(double x);                 //  done
long double s21_ceil(double x);                 //  done
long double s21_cos(double x);                  //  done
long double s21_exp(double x);                  //  done
long double s21_fabs(double x);                 //  done
long double s21_floor(double x);                //  done
long double s21_fmod(double x, double y);       //  peverell
long double s21_log(double x);                  //  boyceing
long double s21_pow(double base, double exp);   //  done
long double s21_sin(double x);                  //  done
long double s21_sqrt(double x);                 //  done
long double s21_tan(double x);                  //  boyceing


#endif  //  SRC_S21_MATH_H_
