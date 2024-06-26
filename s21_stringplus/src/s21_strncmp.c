#include "s21_string.h"

/*latinato pennytrg 26/02/2024*/

/* Сравнивает не более первых n байтов str1 и str2.*/

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int res = 0;
  int found = 0;

  if (str1 && str2 && n > 0) {
    for (s21_size_t i = 0; i < n && !found; i++) {
      if (str1[i] == '\0' || str1[i] != str2[i]) {
        res = str1[i] - str2[i];
        found = 1;
      }
    }
  }
  return res;
}

/*Возвращет целочисленный ноль, если равны.
Если блок  str1  меньше блока  str2  (в лексикографическом порядке), то
strncmp возвращает отрицательное число.

Если блок  str1  больше блока  str2  (в лексикографическом порядке), то strncmp
возвращает положительное число.

Особенности функции : 1) Отрабатывает до '\0'; 2) Если были проверены n
символов или обе сравниваемые строки закончились, и отличий не было, то
сравнение прекращается и возвращается ноль. */