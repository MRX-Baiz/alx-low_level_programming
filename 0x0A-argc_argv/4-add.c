#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - checks if string array is num
 * @num: string
 * Return: 0 or 1
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0 ; i < l ; i++)
		if (!isdigit(num[i]))
			return (1);
	return (0);
}

/**
 * main - adds positive nums
 * @argc: num of arg
 * @argv: cmd line arg
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (isNum(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
