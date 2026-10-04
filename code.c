//let us c by YASHAVANT KANETKAR
//CONTENTS 1 getting started


//code-1
/*ramesh basic gross salary*/
/*#include <stdio.h>
int main()
{
    float bs,da,hr ,grpay;
    printf("enter the bs");
    scanf("%f" ,&bs);
    da =0.4*bs;
    hr =0.2*bs;
    grpay =da + hr + grpay ;
    printf(" da of ramesh %f \n" ,da);
    printf("hr of ramesh %f \n" ,hr);
    printf("grpay of ramesh %f \n" ,grpay);
    return 0;
}*/

//---------------------------------------------------------------------------------------

/*conversation of distance*/
/*#include <stdio.h>
int main()
{
    float km , m , inch , cm , ft;
    printf("enter the distance in kilometers");
    scanf("%f",&km);
    m =km*1000;
    cm=m*100;
    inch =cm/2.54;
    ft=inch/12;
    printf("distance in different units m %f \n cm %f\n inch %f\n ft %f \n",m , cm ,inch ,ft);
    return 0;
}*/


// ------------------------------------------------------------------------------------------
/*make a reportcard for studet */
/*#include <stdio.h>
int main()
{
    float sum ,per , m , e , h , c ,b;
    printf("enter the numbers in math");
    scanf("%f",&m);
    printf("enter the numbers in english");
    scanf("%f",&e);
    printf("enter the numbers in bio");
    scanf("%f",&b);
    printf("enter the numbers in chemistry");
    scanf("%f",&c);
    printf("enter the numbers in hindi");
    scanf("%f",&h);
    sum=m+c+h+b+e;
    per=(sum*100)/500;
    printf("sum of the numbers %f\n" ,sum);
    printf("obtain per. %f\n", per);
    return 0;
}*/

//--------------------------------------------------------------------------------
/* temperature into centigrade degrees*/
/*#include <stdio.h>
int main()
{
    float  fahernheit ,centigrade ;
    printf("enter the temperature");
    scanf("%f" ,&fahernheit);
    centigrade=((fahernheit-32)*5)/9;
    printf(" tem in centigrade %f" , centigrade);
    return 0;
}*/
//------------------------------------------------------------------------------------------
// area or perimeter of circle and rectangle
/*#include <stdio.h>
int main()
{
    float r ,l ,b , area_rect ,area_cir ,per_rect ,cir_cir ;
    double pi =3.14159265359;
    printf(" enter the l, b, r");
    scanf("%f %f %f" ,&l ,&b ,&r);
    area_cir= pi*r*r;
    area_rect =l*b;
    per_rect =2*(l+b);
    cir_cir= 2*pi*r;
    printf("area cir , rect =%f\n%f\n",area_cir ,area_rect);
    printf("peri ,cir =%f\n %f\n" ,per_rect ,cir_cir);
    return 0;
}*/

//--------------------------------------------------------------------------------------------
/*#include <stdio.h>
int main()
{
    int l,b,a0 ,a1 ,a2 ,a3 ,a4, a5, a6, a7, a8;
    printf("enter the dimensions of paper");
    scanf("%d %d" ,&l ,&b);
    a0=l/2;
    a1=b/2;
    a2=l/4;
    a3=b/4;
    a4=l/8;
    a5=b/8;
    a6=l/16;
    a7=b/16;
    a8=l/32;
    printf("A0=%d x %d\n" ,a0 ,b);
     printf("A1=%d x %d\n" ,a0 ,a1);
      printf("A2=%d x %d\n" ,a2 ,a1);
       printf("A3=%d x %d\n" ,a2 ,a3);
        printf("A4=%d x %d\n" ,a4 ,a3);
         printf("A5=%d x %d\n" ,a4 ,a5);
          printf("A6=%d x %d\n" ,a6 ,a5);
           printf("A7=%d x %d\n" ,a6 ,a7);
            printf("A8=%d x %d\n" ,a8 ,a7);
    return 0;
}   */     

//------------------------------------------------------------------------------------
