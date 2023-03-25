#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
* _memcpy - copie memory area from src to dest
* @dest: pointer to the memory
* @src: pointer to source mem area
* @n : unsigned int
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
* _myfunc - calc length , allocates memory , copies content \
, return pointer to new alloc
* @src: The source string to duplicate
* Return: Pointer to the new allocated string
*/

char *_myfunc(char *src)
{
	size_t len;
	char *ptr;

	len = strlen(src) + 1;
	ptr = malloc(len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memcpy(ptr, src, len);
	return (ptr);
}

/**
* new_dog - function that creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new allocated memory for dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = _myfunc(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _myfunc(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
