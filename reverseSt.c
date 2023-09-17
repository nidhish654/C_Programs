#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int sta[MAX];
int top = -1;
void push(int st[],int val);
int reverse(int st[]);
int main(){
    int i,n,a[10],val;
    printf("Enter The Range Of The Array \n");
    scanf("%d",&n);
    printf("Enter The Array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        push(sta,a[i]);
    }
    printf("The Reverse Stack =\n");
    for(i=0;i<n;i++){
        val = reverse(sta);
        printf("%d\t",val);
    }
}
void push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        st[top] = val;
    }
}
int reverse(int st[])
{
    int val;
    if (top == -1)
    {
        printf("\n STACK UNDERFLOW");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}