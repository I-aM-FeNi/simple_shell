#include "root.h"

/**
* _strcpy - MImics a string
* @dest: Target buffer
* @src: origin string
* Return: Points to target buffer
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

if (dest == src || src == NULL)
return (dest);
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
* _strdup – Mimics a string
* @str: String to MImic
* Return: Points
*/

char *_strdup(const char *str)
{
int length;
char *ret;

if (str == NULL)
return (NULL);
length = strlen(str);
ret = malloc(sizeof(char) * (length + 1));
if (ret == NULL)
return (NULL);
strcpy(ret, str);
return (ret);
}

/**
* _puts - Pulls a string to stdout
* @str: String to pull
* Return: Nill
*/

void _puts(char *str)
{
if (str == NULL)
return;
while (*str != '\0')
{
_putchar(*str);
str++;
}
}

/**
* _putchar - Notes part c to stdout
* @c: Part to print
* Return: On victory 1 else -1
*/

int _putchar(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];

if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
