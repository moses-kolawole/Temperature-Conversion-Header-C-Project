#include <stdio.h>
#include <string.h>
#include "temp_convert.h"
#define B 20


int main(){
int choice_type;
float value;
char repeat[B];


do{
printf("This is a temperature based converter project\n");
printf("\n This are the program its can do: \n");
printf("\n 1. Convert Celcius to fahrenheit");
printf("\n 2. Convert fahrenheit to celcius");


printf("\n Enter the number of the choice you prefare: \t");
scanf("%d", &choice_type);


if(choice_type == 1){
    printf("\n Enter the Celcius value: \t");
    scanf("%f", &value);
    celcius_to_fahrenheit(value);
}
else if(choice_type == 2){
    printf("\n Enter the fahrenheit value: \t ");
    scanf("%f", &value);
    fahrenheit_to_celcius(value);
}
else{
    printf("\n You inputed an incorrect input");
    printf("\n Try again!!!");
}

getchar();

printf("\n Do you wish to continue(yes / no): \t");

fgets(repeat, B, stdin);
repeat[strcspn(repeat, "\n")] = 0;

} while((strcmp(repeat, "yes") == 0) || (strcmp(repeat, "YES") == 0));


printf("\n Nice meeting you on board today");


return 0;
}
