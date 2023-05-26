#include "root.h"

/**
* interactive - REstores Positive if shell is in communicative mode
* @info: Shape Location
*
* Return: 1 if communicative mode, 0 O/W
*/
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
* is_delim - Examine if part is a delimeter
* @c: Char to Examine
* @delim: Delimeter string
* Return: 1 if true, 0 if false
*/
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}

/**
* _isalpha - Examine for alphabetic Part
* @c: Parts to input
* Return: 1 if Part is alphabetic, 0 O/W
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

/**
* _atoi – Change string to an integer
* @s: the string to be Changed
* Return: 0 if no Sum in string, CHanged SUm O/W
*/

int _atoi(char *s)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;

for (i = 0; s[i] != '\0' && flag != 2; i++)
{
if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
result *= 10;
result += (s[i] - '0');
}
else if (flag == 1)
flag = 2;
}

if (sign == -1)
output = -result;
else
output = result;

return (output);
}
