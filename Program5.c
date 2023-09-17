/*Read a 1D array containing n elements (n input by user) containing only 0s and 1s.
Print the length of the longest run of 1s. For example, in the array 01011110011, the length is 4.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,a[20],temp=0,ans = 0;
    printf("Enter The Range of Array : ");
    scanf("%d",&n);
    printf("Enter The Numbers (0 or 1) :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            temp++;
        }
        else{
            if(temp > ans){
            ans = temp;
            temp = 0;
            }
        }
    }
    printf("The longest run of 1s = %d\n",(ans));
    return 0;
}