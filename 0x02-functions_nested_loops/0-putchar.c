#ifndef main_h
#ifndef main_h

#define main_h

extern int _putchar(char c);

extern void print_alphabet(void);

extern void print_alphabet_x10(void);

extern int _islower(int c);

extern int _isalpha(int c);

extern int print_sign(int n);

extern int _abs(int);

extern int print_last_digit(int);

extern void jack_bauer(void);

extern void times_table(void);

extern int add(int, int);

extern void print_to_98(int n);

extern void print_times_table(int n);

#include "main.h"
#include "main.h"



/**
 *
 *  * main - Prints Holberton as a message.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

		int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

			int count, sz;



				sz = sizeof(str) / sizeof(int);

					for (count = 0; count < sz; count++)

							{

										_putchar(str[count]);

											}

						_putchar('\n');

							return (0);

}
