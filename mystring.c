#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int mystrlen(char *s){
  int len = 0;
  int i=0;
  while (s[i] != 0){
    len++;
    i++;
  }
  return len;
}

char * mystrcpy(char *dest,char *source){
  int i=0;
  while (source[i] != 0){
    dest[i] = source[i];
    i++;
  }
  return dest;
}

char * mystrncat( char *dest, char *source, int n){
  int index = 0;
  int counter = 0;
  while (dest[index] != 0){
    index++;
  }
  while (counter < 3){
    dest[index] = source[counter];
    index++;
    counter++;
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  int sum_1 = 0;
  int sum_2 = 0;
  int i;
  for (i = 0; s1[i] != 0; i++){
    sum_1 += s1[i];
  }
  for (i = 0; s2[i] != 0; i++){
    sum_2 += s2[i];
  }
  if (sum_1 < sum_2){
    return -1;
  }
  if (sum_1 > sum_2){
    return 1;
  }
  return 0;
}

char * mystrchr( char *s, char c ){
  int counter = 0;
  while (*(s+counter) != c && *(s+counter)!=0){
    counter++;
  }
  if (*(s+counter)==0 && c!=0){
    return NULL;
  }
  return s+counter;
}
