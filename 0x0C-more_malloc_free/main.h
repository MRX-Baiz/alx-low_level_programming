#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar (char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 * error_exit - prints error with _ptchar
 * 		and exits with 98
 * Return: 98
 */
int error_exit(void)
{
	char *er;
	int i;

	er = "Error";
	for (i = 0 ; er[i] != '\0' ; i++)
		_putchar(er[i]);
	_putchar('\n');
	exit(98);
}
/**
 * check_number - checks for numbers
 * @str: string
 * Return: 0 or 1
 */
int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}
/**
 * _length - get length of str
 * @str: string
 * Return: length of str
 */
int _lenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#endif
