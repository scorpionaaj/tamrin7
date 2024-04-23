#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

int main() {
    int i;
    double sum = 0, mean, variance = 0, std_deviation;

    int numbers[N];

    // Generate random numbers
    for (i = 0; i < N; i++) {
        numbers[i] = rand() % 100;
        sum += numbers[i];
    }

    // Calculate mean
    mean = sum / N;

    // Calculate variance
    for (i = 0; i < N; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= N;

    // Calculate standard deviation
    std_deviation = sqrt(variance);

    // Print the generated numbers
    printf("Generated Numbers: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nMean: %.2f\n", mean);

     printf("Variance: %.2f\n", variance);

     printf("Standard Deviation: %.2f\n", std_deviation);

   return 0;
}
