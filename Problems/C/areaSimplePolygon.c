/*       
 *           Given array of x coordinates and y coordinates of a simple polygon(does not intersect itself), find it's area.
*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
 
double shoelace(double X[], double Y[], int n)
{
    double area = 0;
 
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;  
    }
    return area /(double)2;
}
 
int main()
{
    double abscissa[] = {/*x coordinates array*/};
    double ordinate[] = {/*y coordinates array*/};
 
    int n = sizeof(abscissa)/sizeof(abscissa[0]);
 
    printf("%lf", shoelace(abscissa, ordinate, n));
    return 0;
}
