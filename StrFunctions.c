#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
char * mystrncpy( char *dest, char *source, int n){
    while(n + 1){
        dest[n] = source[n];
        n--;
    }

    return dest;
}

int main(){
    
    printf("Testing mystrncpy:\n\n");
    char a[] = "Hello";
    char b[] = "Hi";
    char c[10];

    printf("Creating strings a, b, c:\n\n\ta: %s\n\tb: %s\n\tc: %s\n\n", a, b, c);
    printf("Running mystrncpy(b, a, 3)...\n\n");
    mystrncpy(b, a, 1);
    printf("Result:\n\n\ta: %s\n\tb: %s\n\tc: %s\n", a, b, c);
=======
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
>>>>>>> 4b315c13e49523b6a31e4e0f6304f30eceb0c8ca
}
