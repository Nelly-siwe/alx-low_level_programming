#include <stdio.h>
/**
*main - print a number, FIZ for multiples of three, FizzBuzz for multiples of 5
*
*Return: returns 0
*/
int main(void)
{
int num;
while (num++ < 100)
{
if ((num % 3 == 0) && (num % 5 == 0))
printf("FizzBuzz ");

else if ((num % 3) == 0)
printf("Fizz ");

else if ((num % 5) == 0)
{
if (num != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", num);
}
printf("\n");

return (0);
}
