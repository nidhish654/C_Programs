/*Two numbers are said to be co‐prime, if the greatest common divisor of the numbers is one.
For examples, 13 and 14 are co‐prime but 14 and 21 are not. Write a C function void CoPrime(int a, int b)
to test whether the pair of numbers a and b are co‐prime. In the main program, read five numbers and use 
this function to test how many of them are co‐prime.*/
#include<stdio.h>
#include<stdlib.h>
void CoPrime(int a, int b);
int main(){
    int i,j,n=2,a[20],temp=0,ans = 0;
    printf("Enter The 5 Numbers :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }
    for(i=0;i<=n;i++){
        for(j=i+1;j<n;j++){
            CoPrime(a[i],a[j]);
        }
    }
    return 0;
} 
void CoPrime(int a, int b){
    int m,n,gcd,rem = 0;
    m = a; n = b;
    while(n!=0){
        rem = m %n;
        m = n;
        n = rem;
    }
    gcd = m;
    if(gcd == 1){
        printf("The Numbers %d and %d are Co Primes \n",a,b);
    }
    else{
        printf("The Numbers %d and %d are not Co Primes\n",a,b);
    }
}