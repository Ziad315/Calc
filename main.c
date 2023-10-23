#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1=1;
   int num2;
   int operation;
   char des;   /*Decision for continue*/

    do
       {
            while(1)
            {
                float r;
                int i=0;
                int f=1;
               printf("Hello choose operation from following:\n1)addition\n2)difference\n3)product\n4)division\n5)factorial\n");
               printf("-------------------------------  :");
               scanf("%d",&operation);


               if(operation<5)
                   {
                   printf("Enter first number:");
                   scanf("%d",&num1);
                   printf("Enter second number:");
                   scanf("%d",&num2);
                   switch(operation)
                   {
                   case 1:
                       r=num1+num2;
                       printf("The result =%0.1f\n",r);
                       break;
                    case 2:
                       r=num1-num2;
                       printf("The result =%0.1f\n",r);
                        break;

                    case 3:
                       r=num1*num2;
                       printf("The result =%0.1f\n",r);
                        break;

                    case 4:
                       r=(float)num1/(float)num2;
                       printf("The result =%0.1f\n",r);
                       break;
                  }

               }
              else if(operation==5)   /*factorial*/
                  {
                    printf("Enter a number:\n");
                    scanf("%d",&num1);
                    for(int i=num1;i>0;i--)
                       {
                         f*=i;
                       }
                    printf("The result =%d\n",f);
                  }


              else if(operation >5 || operation <1)  /* ERROR STATE*/
                  {
                    printf("error\n");
                  }
            printf("Do you want to continue? (y/n)\n");
            scanf("%s",&des);
            printf("------------------------------- \n");
            break;
            }
       }while(des=='y');

  return 0;
}
