#include "s21_string.h"

/*Функция побайтно сравнивает коды символов двух строк, на которые указывают
аргументы функции. Сравнение продолжается до встречи первого отличающегося
символа или пока не будут проверены все символы строк.

Если все символы строк совпали, то возвращается 0.

Если при сравнении встретились отличающиеся символы, то сравнение прекращается и
возвращается отрицательное или положительное число, в зависимости от того больше
или меньше код символа строки str1, кода символа строки str2 на той же позиции
(см. возвращаемые значения).

Если строки разной длины, то возвращается положительное число, если строка str1
длиннее строки str2, или отрицательное число, если строка str2 длиннее строки
str1.*/

int s21_strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return (unsigned char)*s1 - (unsigned char)*s2;
}