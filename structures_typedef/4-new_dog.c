#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
size_t n, o, i;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (n = 0; name[n] != '\0'; n++)
;
dog->name = malloc(sizeof(char) * (n + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < n; i++)
{
dog->name[i] = name[i];
}
dog->name[i] = '\0';
for (o = 0; owner[o] != '\0'; o++)
;
dog->owner = malloc(sizeof(char) * (o + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < o; i++)
{
dog->owner[i] = owner[i];
}
dog->owner[i] = '\0';
dog->age = age;
return (dog);
}
