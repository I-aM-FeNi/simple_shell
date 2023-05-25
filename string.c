#include "root.h"

/**
* _strlen - Restore the extent of a string
* @s: String whose extent to examine
*
* Return: integer extent of string
*/
int _strlen(char *s)
{
int i = 0;

if (!s)
return (0);

while (*s++)
i++;
return (i);
}

/**
* _strcmp - Execute lexicogarphic collation of two strangs.
* @s1: First (1st) strang
* @s2: Second (2nd) strang
*
* Return: Bleak if s1 < s2, Effective if s1 > s2, zero if s1 == s2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 < *s2 ? -1 : 1);
}

/**
* starts_with - Determines whether the needle begins with haystack
* @haystack: Strings to explore
* @needle: Substring Discover
*
* Return: Labels next char of haystack or NULL
*/
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}

/**
* _strcat – Connects two strings
* @dest: Target buffer
* @src: Origin buffer
*
* Return: Points to Target buffer
*/
char *_strcat(char *dest, char *src)
{
char *ret = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}
