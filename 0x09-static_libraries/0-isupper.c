#include "main.h"
/**
*_isupper - check if letter is uppercase
*@character: tested character
*Return: returns 1 if it is uppercase , else 0
*/

int _isupper(int character)
{
if ((character >= 'A') && (character <= 'Z'))
return (1);

return (0);
}
