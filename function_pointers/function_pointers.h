#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
