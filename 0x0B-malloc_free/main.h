#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *str);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int **alloc_grid(int width, int height);

#endif
