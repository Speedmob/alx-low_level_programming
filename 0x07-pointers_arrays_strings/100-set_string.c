#include "main.h"
/**
 * set_string - sets the value of pointer (s) to (to).
 * @s: pointer of a pointer to a character
 * @to: a pointer to a character
*/
void set_string(char **s, char *to)
{
	*s = to;
}
