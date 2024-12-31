#include <stdio.h>

int main() {
    int sum = 0;
    int count = 100;

    // Számok összeadása 1-től 100-ig
    for (int i = 1; i <= count; i++) {
        sum += i;
    }

    // Számtani átlag kiszámítása
    double average = (double)sum / count;

    // Eredmény kiírása
    printf("Az osszeg: %d\n", sum);
    printf("A szamtani atlag: %.2f\n", average);
    printf("Ez egy változatás, a GITHUB autobuild teszteléséhez");

    return 0;
}
