#include<stdio.h>
#include<stdlib.h>
struct details
{
    int rn_no;
    char na[20];
    float fees;
    char dob[11];/* data */
}stud;
int main(){
    printf("Enter The Roll Number: ");
    scanf("%d",&stud.rn_no);
    printf("Enter The Name:\n");
    scanf("%s",stud.na);
    printf("Enter The Fees: ");
    scanf("%f",&stud.fees);
    printf("Enter The Date Of Birth (DD-MM-YYYY): ");
    scanf("%s",stud.dob);
    printf("*********STUDENT'S DETAILS***************\n");
    printf("Roll Number = %d\n",stud.rn_no);
    printf("Name = %s\n",stud.na);
    printf("FEES = %f\n",stud.fees);
    printf("DOB = %s\n",stud.dob);
}
