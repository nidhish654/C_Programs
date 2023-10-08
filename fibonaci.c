#include<stdio.h>
#include<stdlib.h>
int fibo(int x);
int main(){
    int n,num;
    printf("Enter The Number ");
    scanf("%d",&n);
    num = fibo(n);
    printf("The Fibonacci = %d\n",num);
    return 0;
}
int fibo(int x){
    if(x==0)
    {
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return(fibo(x-1)+fibo(x-2));
    }
}