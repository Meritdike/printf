#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *string);
int format_string(va_list Args, const char *Str);
int length_of_string(char *string);
int percent_char_check(int *flag, char character);
int print_character(va_list arg);
int format_string(va_list Args, const char *Str);
int percent_char_check(int *flag, char character);
int print_string(va_list arg);
int switching1(char c, va_list arg);
int switching2(char c, va_list arg);
int switching3(char c, va_list arg);

#endif /* MAIN_H */
