#include<stdio.h>
#include<stdlib.h>
#define Max 10
int top = -1;
char stk[Max];
void push(int val);
int main(){
    int front = 0,i=0,bool = 1,x,j;
    char pal[Max];
    printf("Enter The String ");
    scanf("%s", pal);
    while(pal[i] != '\0'){
        push(pal[i]);
        i++;
    }
    for(int i = 0; i < Max; i++){
        printf("%c ", stk[i]);
    }
    x = top;
    j = 0;
    while(i < x/2){
        if(stk[top] != stk[front]){
            bool = 0;
            break;
        } 
        top--;
        front++;
        i++;
    }
    if(bool == 1){
        printf("\nIt is a Palindrome");
    }
    else{
        printf("\nNot a Palindrome !");
    }
}
void push(int val){
    if(top == Max){
        printf("Stack Overflow");
    }
    else{
        top++;
        stk[top] = val;
    }
}