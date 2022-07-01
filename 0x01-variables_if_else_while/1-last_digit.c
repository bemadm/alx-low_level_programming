#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -> assign a random number to the variable each time it is executed.
* and print the last digit of the number stored in the variable
* Return: Always 0 (sucess)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("is 0");
}
if (n < 0 && n != 0)
{
printf("less than 0 not 0");
}
printf("\n");
return (0);
}
