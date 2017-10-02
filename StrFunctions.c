#include <stdio.h>
#include <string.h>

int strlen2(char * c){
  int i = 0;
  while(c[i]){
    i++;
  }
  return i;
}

int main(){
  char a[6] = "hello";
  char b[2] = "a";
  char c[1] = "";

  printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(a), strlen2(a));
  printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(b), strlen2(b));
  printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(c), strlen2(c));

  return 0; 
}
