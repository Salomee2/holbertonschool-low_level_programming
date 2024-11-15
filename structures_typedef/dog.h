#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure représentant un chien
 * @name: le nom du chien (type: pointeur vers char)
 * @age: l'âge du chien (type: float)
 * @owner: le nom du propriétaire (type: pointeur vers char)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
