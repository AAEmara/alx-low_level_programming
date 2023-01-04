#include "main.h"

/**
* _isalpha - Checks if the char is a lowercase or uppercase letter.
*
* @c: Character type parameter to be checked by _isalpha function.
* Retrun: returns 0 or 1.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
