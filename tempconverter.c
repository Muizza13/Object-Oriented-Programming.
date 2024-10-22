#include<stdio.h>
int main(){
    float temp, n;
    printf("Enter the temperature in Kelvins: ");
    scanf("%f", &n);
    temp= n - 273.15;
    printf("Temperature in Celsius is %f", temp);
}