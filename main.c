#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ,choice;
    printf("\n Enter your choice:");
    printf("\n 1.addition \n 2.subtraction \n 3.multiplication \n 4.division \n");
    scanf("%d",&choice);
    if(choice==1)
    {
      printf("\n for the addition enter first integer:");
      scanf("%d",&a);
      printf("\n for the addition enter second integer:");
      scanf("%d",&b);
      printf("\n addition of 2 integer:%d",a+b);
    }
    else if (choice==2)
    {
        printf("\n For the subtraction enter first integer:");
        scanf("%d%d",&a);
        printf("\n For the subtraction enter second integer:");
        scanf("%d%d",&b);
        printf("\n subtraction of 2 integer:%d",a-b);
    }
    else if (choice==3)
    {
       printf("\n For the multiplication enter first integer:");
       scanf("%d%d",&a);
       printf("\n For the multiplication enter second integer:");
       scanf("%d%d",&b);
       printf("\n multiplication of 2 integer:%d",a*b);
    }
    else if (choice==4)
    {
        printf("\n For the division enter first integer:");
        scanf("%d%d",&a);
        printf("\n For the division enter second integer:");
        scanf("%d%d",&b);
        printf("\n division of 2 integer:%d",a/b);
    }
    else
        printf("\n wrong choice!");
}
