#include "../s21_math.h"
/**
 * @brief Функция s21_asin() вычисляет арксинус x, то есть число, синус которого
 * равен x. Его значение математически определено в диапазоне от -Пи/2 до Пи/2
 * включительно.
 * @param x синус числа
 * @return арксинус числа в радианах
 */
long double s21_asin(double x) {
  return (x >= -1 && x <= 1) ? s21_atan(x / (double)s21_sqrt(1 - (x * x)))
                             : S21_NAN;
}