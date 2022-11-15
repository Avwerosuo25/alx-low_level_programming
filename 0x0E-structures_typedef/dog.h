#ifndef DOG_H
#define DOG_H

/**
 * file - dog.h
 * Description: Header file that defines a new type struct dog.
 */

/**
 * struct dog - a new data type describing the characteristics
 * of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
