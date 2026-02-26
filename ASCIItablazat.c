#include <stdio.h>

int main() {

for(int i = 32; i <= 126; i++) {
    printf("%d: %c\n", i, i);
    
    }

    int osszeg = 0;
    
    for(int i = 'A'; i <= 'Z'; i++) {
        osszeg = osszeg + i;
    }
    printf("Az összeg: %d\n", osszeg);
    
    return 0;
}