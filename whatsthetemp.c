#include <stdio.h>

int main(){ // this is a fahrenheit to kelvin conversion
    float tempF;
    float kelvin;

    printf("What's the temperature in Fahrenheit? (be precise)");//
    scanf("%f", &tempF);
    kelvin = (tempF + 459.67) * (5.0 / 9.0);
    printf(" The temperature is %f K", kelvin);
    return 0;
}