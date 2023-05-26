#include "root.h"

/**
* list_len - specifies the linked list's length
* @h: Points to first (1st) node
* Return: size of list
*/

size_t list_len(const list_t *h)
{
size_t i = 0;

for (i = 0; h; i++)
h = h->next;
return (i);
}

/**
* list_to_strings – Restores array of strings
* @head: Points
* Return: Array strings
*/

char **list_to_strings(list_t *head)
{
list_t *node = head;
size_t i = 0, j = 0;
char **strs;

if (!head || !list_len(head))
return (NULL);
strs = malloc(sizeof(char *) * (list_len(head) + 1));
if (!strs)
return (NULL);
while (node)
{
strs[i] = malloc(strlen(node->str) + 1);
if (!strs[i])
{
while (j < i)
free(strs[j++]);
free(strs);
return (NULL);
}
strcpy(strs[i], node->str);
node = node->next;
i++;
}
strs[i] = NULL;
return (strs);
}

/**
* print_list – Points each component
* @h: Points first (1st) node
* Return: size of list
*/

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h)
{
printf("%d: %s\n", h->num, h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}

/**
* node_starts_with - Restores node
* @node: Points to first (1st) node
* @prefix: A string to tie
* @next_char: Next Character
* @c: Character after Prefix that’s matches
* Return: Ties node or null
*/

list_t *node_starts_with(list_t *node, char *prefix, char next_char)

{
if (node == NULL || prefix == NULL)
return (NULL);
do {
if (strncmp(node->str, prefix, strlen(prefix)) == 0)
{
if (next_char == -1 ||
node->str[strlen(prefix)] == next_char)
return (node);
}
node = node->next;
} while (node);
return (NULL);
}

/**
* get_node_index - Determines whether a string begins with a prefix
* @head: A string to examine
* @node: A prefix to tie
* Return: pointer
*/

ssize_t get_node_index(list_t *head, list_t *node)
{
ssize_t i = 0;

if (!head || !node)
return (-1);
while (head && head != node)
{
head = head->next;
i++;
}
return (head ? i : -1);
}
