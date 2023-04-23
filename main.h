#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_String(va_list val);
int format_receiver(const char *format, conver_t f_list[], va_list arg_list);
int print_percent(va_list);
int isNonAlphaNumeric(char c);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);
int print_rev(va_list l);
int print_binary(va_list);
int print_unsgined_number(unsigned int n);
int print_integer(va_list);
void write_base(char *str);
char *rev_string(char *);
unsigned int base_len(unsigned int, int);

int print_number(va_list args);
char *_memcpy(char *dest, char *src, unsigned int n);


#endif
