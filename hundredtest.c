#include <stdio.h>

// Összeg kiszámítása
int calculate_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
    printf("Az osszeg: %d\\n", sum);
    printf("A szamtani atlag: %.2f\\n", calculate_average);
}

// Átlag kiszámítása
double calculate_average(int sum, int count) {
    return (double)sum / count;
}

// Csak akkor forduljon, ha NEM tesztelési környezetben használjuk
#ifndef TESTING
int main() {
    int count = 100;
    int sum = calculate_sum(count);
    double average = calculate_average(sum, count);

    printf("Az osszeg: %d\\n", sum);
    printf("A szamtani atlag: %.2f\\n", average);

    return 0;
}
#endif
