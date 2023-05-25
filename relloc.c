#include "root.h"

/**
* _memset - Gives memory a constant byte .
* @dest: Points to memory area to fill
* @value: Byte to fill location with
* @size: Amount of bytes to fill
* Return: Pointer
*/

char *_memset(char *dest, char value, unsigned int size)
{
unsigned int index;

for (index = 0; index < size; index++)
dest[index] = value;
return (dest);
}

/**
* ffree - frees a string of strings
* @str_array: string of strings
*/

void ffree(char **pp)
{
char **temp = pp;

if (!pp)
{
return;
}
while (*pp)
{
free(*pp++);
}
free(temp);
}

/**
* _realloc - Distribute a block of memory
* @ptr: Points to last malloc'ated block
* @old_size: Byte size of Last block
* @new_size: Byte size of New block
* Return: Points to distributed  block or NULL if failed
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int min_size;

if (!ptr)
return (malloc(new_size));
if (!new_size)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
min_size = old_size < new_size ? old_size : new_size;
while (min_size--)
new_ptr[min_size] = ((char *)ptr)[min_size];
free(ptr);
return (new_ptr);
}
