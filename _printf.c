#include "main.h"

/**
 * _printf - receives the main str and all the parameters
 * to print a formated str
 * @format: A string containing all the desired char
 * Return: A total count of the char printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_String},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL},




	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = format_receiver(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);

}
