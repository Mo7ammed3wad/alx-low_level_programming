#include "dog.h"

int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}

char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogi;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dogi = malloc(sizeof(dog_t));
if (dogi == NULL)
return (NULL);

dogi->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dogi->name == NULL)
{
free(dogi);
return (NULL);
}

dogi->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dogi->owner == NULL)
{
free(dogi->name);
free(dogi);
return (NULL);
}

dogi->name = _strcopy(dogi->name, name);
dogi->age = age;
dogi->owner = _strcopy(dogi->owner, owner);

return (dogi);
}
