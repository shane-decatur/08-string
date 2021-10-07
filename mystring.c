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

// char * mystrcpy(char *dest,char *source){
//
// }
//
// char * mystrncat( char *dest, char *source, int n){
//
// }
//
// int mystrcmp( char *s1, char *s2 ){
//
// }
//
// char * mystrchr( char *s, char c ){
//
// }
