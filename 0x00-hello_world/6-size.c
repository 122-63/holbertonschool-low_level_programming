#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char character;
int inty;
long int longinty;
long long int longlongint;
float floaty;

printf("Size of a char: %zu byte(s)\n", sizeof(character));
printf("Size of an int: %zu byte(s)\n", sizeof(inty));
printf("Size of a long int: %zu byte(s)\n", sizeof(longinty));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
printf("Size of a float: %zu byte(s)\n", sizeof(floaty));

return (0);

}
