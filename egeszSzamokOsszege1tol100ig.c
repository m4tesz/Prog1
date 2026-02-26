#include <stdio.h>

int main()
{
int x = 100;
int osszeg1 = x * (x + 1) / 2;
printf("Egész számok összege 1-től 100-ig: (Gauss féle módszer) %d\n", osszeg1);

int osszeg2 = 0;

for(int i = 1; i <= 100; i++) {

osszeg2 = osszeg2 + i;

}

printf("Egész számok összege 1-től 100-ig: (megoldás ciklussal) %d\n", osszeg2);

return 0;
}

