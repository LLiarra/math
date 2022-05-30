CC = gcc
FLAGS=-Wall -Wextra -Werror -std=c11
TEST_FLAGS=-lcheck -lgcov
VPATH=s21_math

SRC=s21_math/s21_abs.c s21_math/s21_fabs.c s21_math/s21_acos.c s21_math/s21_asin.c s21_math/s21_atan.c \
	s21_math/s21_ceil.c s21_math/s21_cos.c s21_math/s21_exp.c s21_math/s21_floor.c \
	s21_math/s21_fmod.c s21_math/s21_log.c s21_math/s21_pow.c s21_math/s21_sin.c s21_math/s21_sqrt.c s21_math/s21_tan.c

OBJ=$(SRC:.c=.o)

.PHONY: all clean test gcov_report

all: test s21_math.a gcov_report

test:CFLAGS += -coverage
test: s21_test.o $(OBJ)
	$(CC) $(FLAGS) $(OBJ) s21_test.o $(TEST_FLAGS) -o test

s21_test.o: s21_test.c
	$(CC) -c $(FLAGS) s21_test.c

s21_math.a: s21_math.h $(OBJ)
	ar rcs s21_math.a $(OBJ)
	ranlib s21_math.a

gcov_report: test
	./test
	lcov -t "gcov_report" -o gcov_report.info -c -d ./
	genhtml -o report gcov_report.info;

clean:
	rm -rf *.info *.gcda *.gcno s21_math/*.gcda s21_math/*.gcno report *.out $(OBJ) s21_test.o s21_math.a test