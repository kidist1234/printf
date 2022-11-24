#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int conv_handler(char c, int char_index, va_list list);
#endif
