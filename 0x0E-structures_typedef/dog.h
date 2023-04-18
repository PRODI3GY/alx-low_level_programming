#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct named dog.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A struct that helps manage the data of dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
