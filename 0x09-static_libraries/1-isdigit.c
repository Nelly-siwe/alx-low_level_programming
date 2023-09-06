#include "main.h"
/**
*_isdigit -check character is a digit or not
*@character: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int character)
{
if ((character >= 48) && (character <= 57))
return (1);

return (0);
}
