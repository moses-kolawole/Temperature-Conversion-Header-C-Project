#include "temp_convert.h"

void fahrenheit_to_celcius(float x){
    float celcius = (x - 32.0) * (5.0 / 9.0);
    printf("Converting %.2f F is equal to %.2f C", x, celcius);
}
void celcius_to_fahrenheit(float x){
    float fahrenheit = (x * (9.0/5.0)) + 32;
    printf("Converting %.2f C is equal to %.2f F", x, fahrenheit);
}

