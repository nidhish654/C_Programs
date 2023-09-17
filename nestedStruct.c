#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char first_name[10];
    char middle_name[10];
    char last_name[10];
}Name;
typedef struct {
    int dd;
    int mm;
    int yy;
}Date;
typedef struct Student{
    int reg_no;
    Name name;
    Date date;
    int fees;
};
int main(){
    struct Student stud;
    printf("Enter The First Name: ");
    scanf("%s",stud.name.first_name);
    printf("Enter The Middle Name: ");
    scanf("%s",stud.name.middle_name);
    printf("Enter The Last Name: ");
    scanf("%s",stud.name.last_name);
    printf("Enter The Register Number: ");
    scanf("%d",&stud.reg_no);
    printf("Enter The Date Of Birth(DD MM YYYY): \n");
    scanf("%d %d %d",&stud.date.dd,&stud.date.mm,&stud.date.yy);
    printf("Enter The Fees: ");
    scanf("%d",&stud.fees);
    printf("************Student Details************\n");
    printf("Register Number: %d \n",stud.reg_no);
    printf("Name : %s %s %s \n",stud.name.first_name ,stud.name.middle_name ,stud.name.last_name);
    printf("Date: %d/%d/%d \n",stud.date.dd,stud.date.mm,stud.date.yy);
    printf("Fees : %d",stud.fees);
    return 0;
}