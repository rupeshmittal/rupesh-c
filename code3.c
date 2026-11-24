/*check whether a year is leap or not*/
/*#include <stdio.h>
int main()
{
    int year ,x;
    printf("enter year\n");
    scanf("%d",&year);
    x=year%4;
    if(x==0)
    {
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
    }*/

//---------------------------------------------------------------------
/*check type of character entered from the keyboard*/
/*#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character in the keyboard");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 )
    {
        printf("the characteris an uppearcase letter ");
    }
    else if(ch>=97 && ch <=122)
{
printf("the character is lower case");
}
else if(ch>=48 && ch<=57)
{
    printf("the charcter is a digit");
}else
{
    printf("special symbol");
}
return 0;
}*/
//-------------------------------------------------------------------------------
/*check weather a triangle is valid or not*/
/*#include <stdio.h>
int main()
{
    int s1 ,s2 ,s3, largeside,sum;
    printf("enter the side of triangle");
    scanf("%d %d %d" ,&s1 ,&s2 ,&s3);
    if(s1>0 && s2>0 && s3>0 &&(s1+s2>s3)&&(s2+s3>s1)&&(s3+s1>s2))
    {
        printf("triangle is valid");
    }else
    {
        printf("not valid");
    }
    return 0;
}*/
//-----------------------------------------------------------------
/*#include <stdio.h>

int main() {
    int r, g, b;
    float c, m, y, k, white;
    float r_norm, g_norm, b_norm;

    printf("Enter Red, Green, Blue values (0 to 255): ");
    scanf("%d %d %d", &r, &g, &b);

    // Validate input range
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
        printf("Invalid input! RGB values must be between 0 and 255.\n");
        return 1;
    }

    // Handle the special case where R, G, and B are all 0
    if (r == 0 && g == 0 && b == 0) {
        c = 0.0;
        m = 0.0;
        y = 0.0;
        k = 1.0;
    } else {
        r_norm = r / 255.0;
        g_norm = g / 255.0;
        b_norm = b / 255.0;

        // Find the maximum among normalized R, G, and B
        
        white = r_norm;
        
        if (g_norm > white) {
            white = g_norm;
        }
        if (b_norm > white) {
            white = b_norm;
        }

        // Calculate CMYK values
        c = (white - r_norm) / white;
        m = (white - g_norm) / white;
        y = (white - b_norm) / white;
        k = 1.0 - white;
    }

    printf("\nCMYK Values:\n");
    printf("Cyan    = %.2f\n", c);
    printf("Magenta = %.2f\n", m);
    printf("Yellow  = %.2f\n", y);
    printf("Black   = %.2f\n", k);
    return 0;
}*/

//------------------------------------------------------------------------
/*a certain grade of steel*/
/*#include <stdio.h>
int main()
{
    float h,c,t;
    printf("enter the h c t");
    scanf("%f %f %f", &h ,&c ,&t);
    if(h>50 && c<0.7 && t>5600)
    {
        printf("g10");
    }else if(h>50 && c<0.7)
     {
        printf("g9");
    }else if(c<0.7 && t>5600)
     {
        printf("g8");
    }else if(h>50 && t>5600)
    {
        printf("g7");
    }else if(h>50 || c<0.7 || t>5600)
    {
        printf("g9");
    }else{
        printf("invalid");
    }
    return 0;
}*/

//---------------------------------------------------------------
/*reports the bmi catagory*/
#include <stdio.h>
int main() {
    float weight, height, bmi;

    // Input weight and height from the user
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    // Determine and print the BMI category
    if (bmi < 15.0) {
        printf("BMI Category: Starvation\n");
    } 
    else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("BMI Category: Anorexic\n");
    } 
    else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("BMI Category: Underweight\n");
    } 
    else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("BMI Category: Ideal\n");
    } 
    else if (bmi >= 25.0 && bmi <= 25.9) {
        printf("BMI Category: Overweight\n");
    } 
    else if (bmi >= 30.0 && bmi <= 30.9) {
        printf("BMI Category: Obese\n");
    } 
    else if (bmi >= 40.0) {
        printf("BMI Category: Morbidly Obese\n");
    } 
    else {
        printf("BMI falls into a gap not listed in the table.\n");
    }

    return 0;
}