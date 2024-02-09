// You are using GCC
#include <stdio.h>
int main(){
    int Fahrenheit, Celsius;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%d",&Fahrenheit);
    
    Celsius= (Fahrenheit-32) * 5/9;
    printf("temperature in Celsius: %d", Celsius);
    
    return 0;
}
    