#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

int main(){
  char a[10] = "hello";
  char b[2] = "a";
  char c[1] = "";
  char d[45] = "No, ";
  char e[] = "This is not a testing framework";

  // testing strlen
  printf("Testing strlen():\n\t[standard]:%d\n\t[mine]:%d\n", strlen(a), strlen2(a));
  printf("Testing strlen():\n\t[standard]:%d\n\t[mine]:%d\n", strlen(b), strlen2(b));
  printf("Testing strlen():\n\t[standard]:%d\n\t[mine]:%d\n", strlen(c), strlen2(c));

  // testing strncat
  printf("Testing strcat():\n\t[standard]:%s\n\t[mine]:%s\n", strncat(a,b,2), strncat2(a,b,2));
  printf("Testing strcat():\n\t[standard]:%s\n\t[mine]:%s\n", strncat(d,e,strlen2(e)-1), strncat2(d,e,strlen2(e)-1));
  // the above case provides weird output but its the same for both so not a strncat2 problem.

  // testing strcmp
  printf("Testing strcmp():\n\t[standard]:%d\n\t[mine]:%d\n", strcmp(a,b), mystrcmp(a,b));

  
  char x[] = "Hello";
  char y[10] = "";
    char z[] = "Hello";
    char w[10] = "";
    printf("Testing mystrncpy():\n");
    printf("\t[standard]:\t%s\n", strncpy(y,x,3));
    printf("\t[mine]:\t\t%s\n", mystrncpy(w,z,3));

    
    printf("Testing mystrchr:\n");
    const char v[] = "The quick brown fox jumped over the lazy dog";
    const char u = 'z';
    const char m[] = "The quick brown fox jumped over the lazy dog";
    const char n = 'z';
    printf("\t[standard]:\t%s\n", strchr(v, u));
    printf("\t[mine]:\t\t%s\n", mystrchr(m, n));
    
      return 0;
}
