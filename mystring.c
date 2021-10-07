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

// int mystrcmp( char *s1, char *s2 ){
//
// }
//
// char * mystrchr( char *s, char c ){
//
// }
