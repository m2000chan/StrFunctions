#include <stdio.h>
#include <string.h>

int strlen2(char * c){
  int i = 0;
  while(c[i]){
    i++;
  }
  return i;
}

char* strncat2(char *dest, char *source, int n){
  int i = -1;
  int len = strlen2(dest);
  for(; i < n - 1; i++){
    dest[len+i] = source[i+1];
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  int tot1 = 0;
  int tot2 = 0;
  int i = 0;
  while(s1[i] && s2[i]){
    tot1 += s1[i];
    tot2 += s2[i];
    i++;
  }
  return tot1 - tot2;
}
