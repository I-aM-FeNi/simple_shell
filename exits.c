#include "root.h"

/**
* _strncpy - Imitate a string
* @n: Sum of characters to be copied
* @dest: A destination string
* @src: A source string
* Return: Disconnected string
*/

char *_strncpy(char *dest, char *src, int n)
{
int j;
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (j = i; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}

/**
* _strchr - Finds character in a string
* @s: A string to be Combined
* @c: the character to look for
* Return: a pointer
*/

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
s++;
return ((*s == c) ? s : NULL);
}

/**
* _strncat - Disconnects two strings
* @n: Sum of bytes used
* @dest: First (1st) string
* @src: Second (2nd) string
* Return: Disconnected string
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = (j < n) ? '\0' : dest[i + j];
return (dest);
}
