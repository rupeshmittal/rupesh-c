/*determine overtime pay of employee*/
/*#include <stdio.h>
int main()
{
    int hrs,ot;
    int i=1;
    while( i<=10)
    {
        printf("enter the overtime hrs\n");
        scanf("%d",&hrs);
        ot=(hrs-40)*120;
    if(ot<0)
    {
        printf("no extra ammount pay for overtime\n");
    }else
    {
        printf("%d extra ammount\n",ot);
    }
    i++;
    }
return 0;
}*/

//-----------------------------------------------------------------
/*find factorial value of a number*/
/*#include <stdio.h>
int main()
{
    int n ,i=1 ,fv=1;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    { 
        fv=fv*i;
        i++;
    }
    printf("%d",fv);
return 0;
}*/

//----------------------------------------------------
/*power of a number*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    float n , a ,sol ;
    printf("enter the number\n");
     scanf("%f",&n);
      printf("enter the power\n");
       scanf("%f",&a);
    sol=pow(n,a);
    printf("n to power a is %.2f\n",sol);   
return 0;
}*/

//----------------------------------------------------------------------
/*ASCII VALUE */
/*#include <stdio.h>
int main()
{
    int n , i=1;
    while(i<=255)
    {
        printf("ascii value %d = %c \n",i,i);
        i++;
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------
/*armstrong number*/
/*#include <stdio.h>
int main()
{
    int n ,a,b,c,i=1;
    while(i<=500)
    {    a=i/100;
        n=i%100;
        b=n/10;
        c=n%10;
        
        if(i==(a*a*a)+(b*b*b)+(c*c*c))
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}*/

//--------------------------------------------------------------------------------
/*matchstick -21 game*/
/*#include <stdio.h>
int main()
{
    int ms , e,a , b ,c, j=1;
    //first round
    while(j<=4)
    {
        int i=1;
    printf(" user enter your matchstick in 1 to 4 =\n");
    scanf("%d",&ms);
    while(i<5)
    {
        if(ms+i==5)
        {
        printf(" computer = %d\n",i);
        break;
        }
        i++;
    }
j++;
}
   
       printf("20 matchstick are complete user this is your turn\n");
    scanf("%d",&e);
    printf("you loos\n");
    return 0;
    
}*/
//----------------------------------------------------------------------------------
/*program for find howmany num are positive neg and zero*/
/*#include <stdio.h>
int main()
{
    int n, num;
    int pos = 0, neg = 0, zero = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
     {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}*/

//--------------------------------------------------------------------------------
/*find the octal equivalent*/
/*#include <stdio.h>
int main()
{
    int n,rem, place=1 , octal=0 ;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        rem =n%8;
        octal=octal+(rem*place);
        n=n/8;
        place=place*10;
    }
    printf("octal euqivalent : %d\n" ,octal);

    return 0;
}*/
//--------------------------------------------------
#include <stdio.h>
int main()
{
    int n,i=2 ,a ,small ,frg ,max , min;
    printf("how many number do you want to put in a set");
    scanf("%d",&n);
    printf(" enter first number ");
    scanf("%d",&frg);
    max=frg;
    min=frg;
    while (i<=n)
    {
       scanf("%d",&frg);
       if(frg>max){
         max=frg;
       }else if(frg<min)
       {
          min = frg;
       }
       i++;

    }printf(" min =%d",min);
    printf(" max= %d",max);
    printf("%d",max-min);
    return 0;
    
}
