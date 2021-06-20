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
printf("size of an int is %zu\n", sizeof(inty));
printf("size of a long int %zu\n", sizeof(longinty));
printf("size of a long long int is %zu\n", sizeof(longlongint));
printf("Size of a float: %zu byte(s)\n", sizeof(floaty));

return (0);

}
