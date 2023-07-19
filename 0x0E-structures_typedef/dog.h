#ifndef DOGHEADER
#define DOGHEADER
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
  * struct dog - dog structure
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description: dog structure with 3 members
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

