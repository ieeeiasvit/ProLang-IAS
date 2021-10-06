/*  
    Circle-Line intersection problem
    Given radius of circle centered at (0,0) and coefficients of ax + by + c = 0, Find their intersection point
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//near zero i.e epsilon definition
#define EPS 1e-9

int main()  
{
   double r, a, b, c;
   printf("Enter radius of Circle:\n");
   scanf("%lf", &r);
   printf("Enter the coefficient of x:\n");
   scanf("%lf", &a);
   printf("Enter the coefficient of y:\n");
   scanf("%lf", &b);
   printf("Enter the constant:\n");
   scanf("%lf", &c);
   
   double x0 = -a*c/(a*a+b*b);
   double y0 = -b*c/(a*a+b*b);

    if(c*c > r*r*(a*a+b*b)+EPS)
    {
        printf("No intersection");
        return 1;
    }
    else if(abs (c*c - r*r*(a*a+b*b)) < EPS)
    {
        printf("%lf %lf", x0, y0);
    }
    else
    {
        double d = r*r - c*c/(a*a+b*b);
        double m = sqrt (d / (a*a+b*b));
        double ax, ay, bx, by;
        ax = x0 + b * m;
        bx = x0 - b * m;
        ay = y0 - a * m;
        by = y0 + a * m;
        
        printf("Two points found\n");
        printf("%lf %lf and %lf %lf", ax, ay, bx, by);
    }
   
   return 0;
}
