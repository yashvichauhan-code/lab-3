//to convert degree celcius to fahrenheit
#include<stdio.h>
float temperature(float a, float b){
    b= (a*9/5)+32;
    return b;
}
int main()
{
    float celcius, fahrenheit;
    printf("enter celcius:");
    scanf("%f", &celcius);
    float result = temperature(celcius, fahrenheit);
    printf("fahrenheit: %f\n", result);
    return 0;
}