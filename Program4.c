/*Read n integers and print the third largest among them. n is input by user. You may use an array to store all the
input numbers.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,a[20],temp=0;
    printf("Enter The Range of Array : ");
    scanf("%d",&n);
    printf("Enter The Numbers :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
    printf("The Third Largest Element Of The Array = %d\n",a[n-3]);
    return 0;
}