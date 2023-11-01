#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str) {
  if (str == NULL || str[0] == '\0') {
    return NULL;
  }

  size_t len = strlen(str);
  char *dup = malloc(sizeof(char) * (len + 1));
  if (dup == NULL) {
    return NULL;
  }

  memcpy(dup, str, len);
  dup[len] = '\0';

  return dup;
}
