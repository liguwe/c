#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;  /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;  /* step size */
    celsius = lower;
    printf("CeLsius Fahr\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0) / 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}