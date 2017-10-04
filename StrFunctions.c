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

int main(){
    
    printf("Testing mystrncpy:\n\n");
    char x[] = "Hello";
    char y[10];

    printf("Creating strings x, y:\n\n\tx: %s\n\ty: %s\n\n", x, y);
    printf("Running mystrncpy(x, y, 3)...\n\n");
    mystrncpy(x, y, 3);
    printf("Result:\n\n\tx: %s\n\ty: %s\n", x, y);
    
    char a[6] = "hello";
    char b[2] = "a";
    char c[1] = "";

    printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(a), strlen2(a));
    printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(b), strlen2(b));
    printf("Testing strlen():\n[standard]:%d\n[mine]:%d\n", strlen(c), strlen2(c));

    return 0; 
}
