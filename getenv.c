#include "root.h"

/**
* _setenv - Boot new environment variable
* @value:A string env var worth
* @info: Shape holding arguments
* @var: A String env var assets
* Return: Always 0
*/

int _setenv(info_t *info, char *var, char *value)
{
char *buf = NULL;

list_t *node;

if (!var || !value)
return (0);
buf = strcat(var, "=");
buf = strcat(buf, value);
node = info->env;
while (node)
{
if (strcmp(node->str, var) == 0)
{
free(node->str);
node->str = buf;
info->env_changed = 1;
return (0);
}
node = node->next;
}
add_node_end(&(info->env), buf, 0);
free(buf);
info->env_changed = 1;
return (0);
}

/**
* get_environ – Replaces string array
* @info: Shape holding potential arguments
* Return: Always 0
*/

char **get_environ(info_t *info)
{
if (!info)
return (NULL);
if (!info->environ || info->env_changed)
{
bfree((void **)&(info->environ));
info->environ = list_to_strings(info->env);
info->env_changed = 0;
}
return (info->environ);
}

/**
* _unsetenv - Detach an environment variable
* @info: Shape holding arguments
* @var: A string env var assets
* Return: 1 or 0
*/

int _unsetenv(info_t *info, char *var)
{
list_t *node = info->env;
size_t i = 0;
char *p;

if (!node || !var)
return (0);
while (node)
{
p = strchr(node->str, '=');
if (p && strcmp(node->str, var) == 0)
{
info->env_changed = delete_node_at_index(&(info->env), i);
i = 0;
node = info->env;
continue;
}
node = node->next;
i++;
}
return (info->env_changed);
}

