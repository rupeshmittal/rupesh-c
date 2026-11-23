/*calculate the profit or loss*/
/* #include <stdio.h>
int main()
{
    float cp ,sp , p, l;
    printf("enter the cp and sp ");
    scanf("%f %f",&cp ,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
    {
        printf("profit %f" ,p);
}
else if(l>0)
{
 printf("loss %f" , l);
}
else if (p==0)
{
    printf("no profit and no loss %f" ,p);

}else
{printf("your ammount is wrong");
}
return 0;

}*/

//---------------------------------------------------------------------------

/*check wheather a number is even or odd*/
 /*#include <stdio.h>
int main()
{
    int n ;
    printf("enter the n ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("n is even");
    }else
    {
        printf("n is odd");

    }
    return 0;
}*/

//------------------------------------------------------

/*check weather  a year is leap year or not*/
/*  #include <stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("this year is leap year");

    }else
    {
        printf("this year is not a leap year");

    }
return 0;
}
*/

//---------------------------------------------------------------------------
/* program to determine the youngest of the three*/
/*
#include <stdio.h>
int main()
{
    int a , b ,c ;
    printf(" enter the  age of three people");
    scanf("%d %d %d", &a ,&b ,&c);
    if(a>b && a>c)
    {
        printf("first person are older %d",a);
}else if (b>a && b>c)
{
    printf("second person is older %d",b);

}else if(c>a && c>b)
{
    printf("third person is older%d",c);
}
else if (a=b && a>c)
{
    printf("first and second person are same age %d " ,a);
}
else if (a=c && a>b)
{
printf("first and third person age same age %d" ,a);

}
else if(b=c && b>a)
{
    printf("second and third people are same age %d " ,c);
}
else
{
    printf("not valid age");
}
return 0;
}*/

//--------------------------------------------------------------------------------------------------
/*triangle is valid or not valid*/
/*
#include <stdio.h>
int main()
{
   float a,b,c,k;
    printf("enter the angles of triangle a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    k=a+b+c;
    
    if(k==180)
    {
        printf("triangle is valid");
}
else
{
   printf("triangle is not valid");
}
return 0;
}
*/
//---------------------------------------------------------------------------------
/*absolute value of a number*/
/*#include <stdio.h>
int main()
{
    float n;
    printf("enter the number n");
    scanf("%f",&n);
    if(n>=0)
    {
        printf("%f",n);
}
else if (n<0)
{
    n=(-1)*n;
    printf("%f",n);
}
return 0;
}*/

//----------------------------------------------------------------------------------------------
/*find the area of rectangle is grater than its perimeter*/
/*#include <stdio.h>
int main()
{
float l,b, area ,per;
printf("enter the l and b ");
scanf("%f %f" ,&l,&b);
area =l*b;
per= 2*(l+b);
if(area>per)
{
    printf("area is gratter than perimeter");
}
else if(area ==per)
{
    printf("area = perimeter");
}else
{(
    printf("area is less than perimeter");

}
return 0;
}*/
//------------------------------------------------------------------------------------

/*three points fall on one stright line*/
/*#include <stdio.h>
int main()
{
    float area , x1, x2,x3, y1,y2,y3 ;
    printf("enter all points");
    scanf("%f %f %f %f %f %f",&x1,&x2,&x3,&y1,&y2,&y3);
    area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(area==0)
    {printf("this is a stright line");
    }else
    {
        printf("not a stright line");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*points lies inside the circe, on the circle , ;out side circle*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,r ,x1 ,y1 ,d, a, b;
    printf("enter the coordinates x and y and radius r");
    scanf("%f %f %f",&x ,&y ,&r);
    printf("enter the point");
    scanf("%f %f", &x1 ,&y1);
    a=pow(x1-x ,2);
    b=pow(y1-y, 2);
d=sqrt(a+b);
if(d<r)
{
    printf("Inside the circle:");
}
    else if(d=r)
{
    printf("on the circle");
}else
{
    printf("outsidethe circle");
}
return 0;
}*/

//------------------------------------------------------------------------------
/*where is point lie*/
/*#include <stdio.h>
int main()
{
    float x , y;
    printf("enter the coordinates of the point");
    scanf("%f %f" , &x ,&y);
if(y==0)
{
    printf("lies on x axis");
}
else if(x==0)
{
    printf("lies on y axis");
}
else if(x==0 && y==0)
{
    printf("lies on origin");
}else
{
    printf("lies on 2d ");
}
return 0;
}*/
//------------------------------------------------------------------------------------------
/*what is the day of first january*/
#include <stdio.h>
int main()
{
    int year ,ref_year=1900, rem_year ,leap_year,woleap_year ,days,a;
    printf("enter the year");
    scanf("%d",&year);
    rem_year=year-ref_year; //rem_year= kitne saal jyada 1900 se
    leap_year=rem_year/4; //366 days wale years
    woleap_year=rem_year-leap_year; //365 days wle year
    days=leap_year*366+woleap_year*365; //totel days 1900se lekar input year tak
    a=days%7;
    if(a==0)
    {printf("monday");
    }else if(a==1)
    {
    printf("tuesday");
    }else if(a==2)
    {
    printf("wednesday");
    }else if(a==3)
    {
    printf("thursday");
    }
else if(a==4)
    {
    printf("friday");
    }
else if(a==5)
    {
    printf("saturday");
    }
else 
    {
    printf("saturday");
    }
return 0;
}