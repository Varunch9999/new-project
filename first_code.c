#include<stdio.h>
void main()
{
    int num,i,n,count;
    printf("Enter max range :- ");
    scanf("%d",&n);
    //printf("\nList of prime numbers from 1 to %d is : \n",n);
    for (num=1;num<=n;num++){

        count=0;

        for (i=2;i<=(num/2);i++){

            if ((num%i)==0){
               count++;
               break;
            }
        }
        if (count==0 && num!=1)
            printf("%d ",num);

    }
}