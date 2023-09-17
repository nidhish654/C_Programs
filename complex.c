#include<stdio.h>
#include<stdlib.h>
struct complex{
    int fi;
    int img;
};
int main(){
    struct complex c[2];
    int i,n,sumr=0,sumi=0,diffr=0,diffi=0;
    while(1){
        printf("********MAIN MENU ********\n");
        printf("1. Read The Complex Numbers\n");
        printf("2. Display The Complex Numbers\n");
        printf("3. Add The Complex Numbers\n");
        printf("4. Subtract The Complex Numbers\n");
        printf("5. Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1 :for(i=0;i<2;i++){ 
                printf("Enter The real part of %d Number\n",i+1);
                scanf("%d",&c[i].fi);
                printf("Enter The imaginary part of %d Number\n",i+1);
                scanf("%d",&c[i].img);
                }
            break;
        case 2 :for(i=0;i<2;i++){
            printf("The %d Complex Number = %d + %d i\n\n",i+1,c[i].fi,c[i].img);
        }
            break;
        case 3 : sumr = c[0].fi + c[1].fi;
                sumi = c[0].img + c[1].img;
                printf("The Sum Of The Complex Numbers = %d + %d i\n\n",sumr,sumi);
                break;
        case 4 : diffr = c[0].fi - c[1].fi;
                diffi = c[0].img - c[1].img;
                printf("The Sum Of The Complex Numbers = %d + %d i\n\n",diffr,diffi);
                break;
        case 5:
            exit(0);
            break;
        
        }
    }
}