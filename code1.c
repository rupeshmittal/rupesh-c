//letus c yashavant kanetkar
// chapter 2  C- instruction


/*sum of all the number in 5 digit number &reverse the number*/
/*#include <stdio.h>
int main()
{
 int n ,rev, sum ,d1, d2, d3 , d4 , d5;
 printf("enter the number ");
 scanf("%d" ,&n);
 d1=n/10000;
 n=n%10000;
 d2=n/1000;
 n=n%1000;
 d3=n/100;
 n=n%100;
 d4=n/10;
 n=n%10;
 d5=n/1;
 sum=d1+d2+d3+d4+d5;
 rev= d5*10000+d4*1000+d3*100+d2*10+d1*1;
 printf("sum of all digit %d\n",sum);
 printf("reverse the number%d\n",rev);
 return 0;
}*/
//--------------------------------------------------------------------------------
/*area of triangle by sides*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    float s,a,b,c, area ;
    printf("enter the sides a,b,c = ");
    scanf("%f %f %f" ,&a ,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle %f\n",area);
    return 0;
}*/

//--------------------------------------------------------------------------------------
/*cartesian to polar co-ordinates*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, t;
    printf("enter the cartesian co-ordinates");
    scanf("%f %f" ,&x ,&y);
    r=sqrt(x*x+y*y);
    t=atan(y/x);
    printf("the polar co-ordinates is (%f,%f)",r,t);
    return 0;
}*/
//---------------------------------------------------------------------
/*distance in nautical*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    float d,l1 ,l2 ,g1 ,g2 ;
    printf("enter the latitude");
    scanf("%f %f" ,&l1 ,&l2);
    printf("enter the longitude");
     scanf("%f %f",&g1 ,&g2);
    l1=(l1*22)/(180*7);
     l2=(l2*22)/(180*7);
      g2=(g2*22)/(180*7);
       g1=(g1*22)/(180*7);
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
    printf(" distance in nautical =%f" ,d);
    return 0;
}*/
   
//-------------------------------------------------------------------
/*find the wind chill factor*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    float wcf , v , t ;
    printf("enter the temperature of wind");
    scanf("%f",&t);
    printf("enter the speed of wind");
    scanf("%f" ,&v);
    wcf =35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("wind chill factor is %f" ,wcf);
    return 0;
}*/

//--------------------------------------------------------------------------

/*print all the trigo ratio*/

/*#include <stdio.h>
#include <math.h>
int main()
{
    float theta;
    double pi=3.1415926535;
    double a,b, c, d, e, f ;
    printf("enter the theta in degree");
    scanf("%f",&theta);
    theta =(theta*pi)/180;
    a=sin(theta);
     b=cos(theta);
      c=1/sin(theta);
       d=tan(theta);
        e=1/tan(theta);
         f=1/cos(theta);
    printf("all trigo ratio is a,b,c,d,e,f =%lf %lf %lf %lf %lf %lf",a,b,c,d,e,f);
    return 0;
}*/

//------------------------------------------------------
/*interchange the two numbers*/
/*#include <stdio.h>
int main()
{
    int a, b ,n;
    printf("enter the number 1 ");
    scanf("%d",&a);
    printf("enter the number 2 ");
    scanf("%d",&b);
    n=a+b;
    a=n-a;
    b=n-b;
    printf("the two numbers are a ,b = %d %d",a,b);
    return 0;
}*/

//------------------------------------------------------------------------------
/*compute the smallest num of notes that will be combine to gives rs.*/
/*#include <stdio.h>
int main()
{
    int n ,a,b,c,d,e,f ,t_notes;
    printf("enter the ammount ");
    scanf("%d",&n);
    a=n/100;n=n%100;
    b=n/50;n=n%50;
    c=n/10;n=n%10;
    d=n/5;n=n%5;
    e=n/2;n=n%2;f=n/1;
    t_notes=a+b+c+d+e+f;
    printf("%d",t_notes);
    return 0;
}*/
//-------------------------------------------------------------------------------