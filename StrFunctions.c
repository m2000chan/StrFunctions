#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
}
