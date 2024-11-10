#include <stdio.h>

main(){
    int fahr, celsius;
    int maxFahrenheit, step;

    maxFahrenheit = 300;
    fahr = 0;
    while (fahr <= maxFahrenheit) {
        celsius = 5 * (fahr - 30) / 9;
        printf("%d\n", celsius);

        fahr = fahr + 20;
    }
    
}