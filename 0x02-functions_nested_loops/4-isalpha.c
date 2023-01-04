#include "main.h"

/**
* _isalpha - Checks if the char is a lowercase or uppercase letter.
*
* Retrun: 1 (Success) or 0 (Fail)
*/
int _isalpha(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
		
	else if ( c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
