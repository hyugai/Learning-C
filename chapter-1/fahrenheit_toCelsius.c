#include <stdio.h>

main(){
    float fahr, celsius;
    int maxFahrenheit, step;

    maxFahrenheit = 300;
    fahr = 0;
    while (fahr <= maxFahrenheit) {
        celsius = 5 * (fahr - 30) / 9;
        printf("%3.0f %3.1f\n", fahr, celsius);

        fahr = fahr + 20;
    }
    
}