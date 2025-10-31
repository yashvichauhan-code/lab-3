//to convert degree celcius to fahrenheit
#include<stdio.h>
float temperature(float a, float b){
    b= (a*9/5)+32;
    return b;
}
int main(){
    float celcius, fahrenheit, result;
    printf("enter cdelcius: ");
    scanf("%f", &celcius);
    result= temperature(celcius, fahrenheit);
    printf("fahrenheit=%f", result);
    return 0;
}
//fix