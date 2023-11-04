#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H
/**
 * struct dog - structure public scoped by default
 * @name: pointer to a char (struct member)
 * @age: floating type (struct member)
 * @owner: pointer to a char (struct member)
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif /* STRUCT_DOG_H */
