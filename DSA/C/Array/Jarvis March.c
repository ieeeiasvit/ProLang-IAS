#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x_extract(char coordinate[]);
int y_extract(char coordinate[]);
struct Points
{
    int x;
    int y;
};

int main()
{
    int n;
    scanf("%d", &n);
    
    struct Points point[n];
    for (int counter = 0; counter < n; counter++)
    {
        char str[20];
        scanf("%s",str);
        point[counter].x = x_extract(str);
        point[counter].y = y_extract(str);
    }

    int least_x=0;
    for (int counter = 1; counter < n; counter++)
        if(point[least_x].x > point[counter].x)
            least_x = counter;
    
    int ans[n];
    for (int counter = 0; counter < n; counter++)
        ans[counter] = -999;

    int b;
    int a = least_x;
    do
    {
        b = (a+1) % n;
        for (int counter = 0; counter < n; counter++)
        {
            int direction = (point[b].y-point[a].y) * (point[counter].x-point[b].x) - (point[b].x-point[a].x) * (point[counter].y-point[b].y);
            if(direction < 0)
                b = counter;
        }
        a=b;
        ans[a]=a;
    }while(least_x!=a);
    
    int count=0;
    struct Points fpoints[n];
    for (int counter = 0; counter < n; counter++)
    {
        if(ans[counter] != -999)
        {
            fpoints[count].x=point[counter].x;
            fpoints[count].y=point[counter].y;
            count += 1;
        }
    }
    
    for (int counter1 = 0; counter1 < count-1; counter1++)
    {
        for (int counter2 = 0; counter2 < count-counter1-1; counter2++)
        {
            if(fpoints[counter2+1].x < fpoints[counter2].x)
            {
                struct Points temp = fpoints[counter2+1];
                fpoints[counter2+1] = fpoints[counter2];
                fpoints[counter2] = temp;
            }
            else if(fpoints[counter2+1].x == fpoints[counter2].x)
            {
                if(fpoints[counter2+1].y < fpoints[counter2].y)
                {
                    struct Points temp = fpoints[counter2+1];
                    fpoints[counter2+1] = fpoints[counter2];
                    fpoints[counter2] = temp;
                }
            }
        }
    }
    
    for (int counter = 0; counter < count; counter++)
        printf("(%d,%d) \n", fpoints[counter].x, fpoints[counter].y);
    
    return 0;
}

int x_extract(char coordinate[])
{
    int counter = 1;
    int x = 0;
    if(coordinate[1] == '-')
        counter += 1;
  
    while(coordinate[counter] != ',')
    {
        x = 10*x + coordinate[counter] - '0';
        counter += 1;
    }
    
    if(coordinate[1] == '-')
        x *= -1;

    return x;
}

int y_extract(char coordinate[])
{
    int counter = 0;
    int temp = 1;
    int y = 0;
    while(coordinate[counter] != ',')
        counter += 1;
    counter += 1;
    
    if(coordinate[counter] == '-')
    {
        temp = -1;
        counter += 1;
    }
    
    while(coordinate[counter] != ')')
    {
        y = 10*y + coordinate[counter] - '0';
        counter += 1;
    }
    
    y *= temp;
    return y;
}