#include<stdio.h>
#include<stdlib.h>
int fact(int x);
int main(){
    int n,num;
    printf("Enter The Number");
    scanf("%d",&n);
    num = fact(n);
    printf("The Factorial = %d\n",num);
}
int fact(int x){
    if(x==0)
    {
        return 1;
    }
    else{
        return(x*fact(x-1));
    }
}