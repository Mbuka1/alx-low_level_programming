#include "stdlib.h"
/**
*Function that checks for lowercase character
*int _islower(int c)
*Returns 1 if c is lowercase
*Returns 0 otherwise
*/
int _islower(int c)
{
char c = 'a';
if (c > 96 && c < 122)
return (1);
else
return (0);
}
