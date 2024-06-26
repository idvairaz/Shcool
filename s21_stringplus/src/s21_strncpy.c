#include "s21_string.h"

/*latinato pennytrg 26/02/2024*/

/* Копирует до n символов из строки, на которую указывает src, в dest. */

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  char *dest_start = dest;
  s21_size_t i;
  for (i = 0; i < n && *src != '\0'; i++, *dest++, *src++) {
    *dest = *src;
  }
  for (; i < n; i++, *dest++) {
    *dest = '\0';
  }
  return dest_start;
}

/*Функция возвращает указатель на строку, в которую скопированы данные.

Особенности функции : Функция strncpy копирует данные из строки, на которую
указывает аргумент source, в строку на который указывает аргумент destination,
пока не встретится символ конца строки (нулевой символ) или количество
скопированных символов не достигнет величины указанной в аргументе n. При этом
символ конца строки не копируется.

Если в аргументе n указана величина большая, чем длинна строки, т.е. символ
конца строки '\000' встретился раньше, чем было скопировано n символов, то в
массив, на который указывает аргумент destination, дозаписывается столько
нулевых символов, чтобы общая длина записанной строки достигла величины
указанной в аргументе n.

Если строки перекрываются, результат копирования будет не определен.*/
