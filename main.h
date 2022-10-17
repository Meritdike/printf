#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int length_of_string(char *string);
int print_character(va_list arg);

#endif /* MAIN_H */
