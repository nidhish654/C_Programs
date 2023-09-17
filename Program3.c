/*Write a C program to enter 10 floating numbers in an array and display the value and memory
address of respective number.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float a[10];
    int i,n=10;
    printf("Enter 10 Floating Numbers :\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    printf("The Required Output : \n");
    for(i=0;i<n;i++){
        printf("The Value %d Element = %f\tThe Adrress = %x \n",(i+1),a[i],&a[i]);
    }
    return 0;
}