#include "main.h"

/**
 * cap_string.
 */

char *cap_string(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		if ((s[l - 1] == ' ' || s[l - 1] == '\n'
		|| s[l - 1] == '\t' || s[l - 1] == ','
		|| s[l - 1] == ';' || s[l - 1] == '!'
		|| s[l - 1] == '?' || s[l - 1] == '"'
		|| s[l - 1] == '(' || s[l - 1] == ')'
		|| s[l - 1] == '{' || s[l - 1] == '}'
		|| s[l - 1] == '.')
		&& (s[l] >= 'a' && s[l] <= 'z'))
		{
			s[l] = s[l] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[l] = s[l];
		}
		l++;
	}
	return (s);
