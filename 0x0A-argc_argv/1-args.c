#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguements
 * @argv: array of arguments
 * Return: the number of arguements
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
