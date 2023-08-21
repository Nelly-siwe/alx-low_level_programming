#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap - char(s + length, s + i);
i++;
length--;
}
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

/**
*swap - char - swap two characters
*@a: first character
*@b: second character
*Return: nothing
*/

void swap-char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
