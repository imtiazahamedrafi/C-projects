#include<stdio.h>

int main()
{int b;
printf("***NUMBER PRINT SIMPLE CODE*** \n***BY IMTIAZ AHAMED RAFI***\n\n\n");
printf("enter the amount you wanted to print (only integer number)\n ");
scanf("%d",&b);
printf("you have entered %d numbers to print \n",b);
if ( b>1){

    for  (int a=1; a<=b; a++)
    { printf("%d\n",a);}
    printf("\nservice done successfully\n have a nice day :)");
    }
    else {
    printf("sorry :( service error \n you are using this program in wrong way\n have a nice day :)");}
    return 0;
    }
