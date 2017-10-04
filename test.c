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
  printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(a), strlen2(a));
  printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(b), strlen2(b));
  printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(c), strlen2(c));

  // testing strncat
  printf("Testing strcat():\n[standard]:%s\n[mine]:%s\n", strncat(a,b,2), strncat2(a,b,2));
  printf("Testing strcat():\n[standard]:%s\n[mine]:%s\n", strncat(d,e,strlen2(e)-1), strncat2(d,e,strlen2(e)-1));
  // the above case provides weird output but its the same for both so not a strncat2 problem.

  // testing strcmp
  printf("Testing strcmp():\n[standard]:%d\n[mine]:%d\n", strcmp(a,b), mystrcmp(a,b));

  return 0; 
}