#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mystrncpy( char *dest, char *source, int n){
    while(n + 1){
        dest[n-1] = source[n-1];
        n--;
    }

    return dest;
}



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

char * mystrchr( char *s, char c ){
    int *p = s;
    
    while(*p != c){
        p++;
    }
    
    return p;
    
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
