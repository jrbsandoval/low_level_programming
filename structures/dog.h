#ifndef HEADER_H
#define HEADER_H

/* Librarys */
#include <stdlib.h>
#include <stdio.h>

/* Structures */

/**
 * struct dog - structure for dog's
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: propietary of dog
 *
 * Description: Structura para crear un objeto para animales
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /*HEADER_H*/
