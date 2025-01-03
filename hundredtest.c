#include <stdio.h>

int calculate_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

double calculate_average(int sum, int count) {
    return (double)sum / count;
}

void print_results() {
    int count = 100;
    int sum = calculate_sum(count);
    double average = calculate_average(sum, count);

    printf("Az osszeg: %d\n", sum);
    printf("A szamtani atlag: %.2f\n", average);
}

#ifndef TESTING
int main() {
    print_results();
    return 0;
}
#endif
