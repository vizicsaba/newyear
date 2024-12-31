#include <stdio.h>
#include <stdlib.h>

// Prototípusok
int calculate_sum(int n);
double calculate_average(int sum, int count);

void run_tests() {
    // Teszt az összeg kiszámítására
    int sum = calculate_sum(100);
    if (sum == 5050) {
        printf("Sum test passed.\\n");
    } else {
        printf("Sum test failed: expected 5050, got %d\\n", sum);
        exit(1);
    }

    // Teszt az átlag kiszámítására
    double average = calculate_average(sum, 100);
    if (average == 50.5) {
        printf("Average test passed.\\n");
    } else {
        printf("Average test failed: expected 50.5, got %.2f\\n", average);
        exit(1);
    }
}

int main() {
    run_tests();
    return 0;
}
