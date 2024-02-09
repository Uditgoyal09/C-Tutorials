// You are using GCC
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
     c=a;
     a=b;
     b=c;
     printf("After swapping: a = %d, b = %d\n", a, b);
}
    