#include "root.h"

/**
 * bfree - Allows pointer and sets it to NULL
 * @ptr: Label pointer to free
 * Return: 1 if free else 0
 */

int bfree(void **ptr)
{
        if (!ptr || !*ptr)
            return (0);
        free(*ptr);
        *ptr = NULL;
        return (1);
}
