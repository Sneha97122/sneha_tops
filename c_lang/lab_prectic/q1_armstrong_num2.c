#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n;
    double result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

        originalNum = num;

        // Calculate sum of powered digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if ((int)result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

