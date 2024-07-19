#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int is_digit(char *s);
int _strlen(char *s);
void errors(void);

#endif
