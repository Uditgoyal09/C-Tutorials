// You are using GCC
// #include<stdio.h>
// int main(){
        // int a= 5;
        // float b= 1.2;
        // char charvar= 'S';
        // double x= 8.23;
        
        // printf("Integer type: %d\n", a);
        // printf("float type: %f\n", b);
        // printf("character type: %c\n",charvar);
        // printf("double data type: %lf",x);
        #include <stdio.h>

    // int a;
    // printf("enter number a:");
    // scanf("%d",&a);
    // return 0;
    
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num % 2 == 0) {
    printf("%d is an even number.\n", num);
  } else {
    printf("%d is an odd number.\n", num);
  }

  return 0;
}
       
