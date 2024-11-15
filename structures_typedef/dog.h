#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure représentant un chien
 * @name: le nom du chien (type: pointeur vers char)
 * @age: l'âge du chien (type: float)
 * @owner: le nom du propriétaire (type: pointeur vers char)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
