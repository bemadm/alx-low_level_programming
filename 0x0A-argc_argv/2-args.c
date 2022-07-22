#include <stdio.h>
/**
* main -> this a function strcat
* @argc : first parameter
* @argv : second parameter
* Return: 0 success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc);
int i;
for (i = 0; i < argc; i++)
{
printf("argv index %d is = %s\n", i, argv[i]);
}
printf("argv index %d is = %s\n", argc, argv[argc]);
return (0);
}
