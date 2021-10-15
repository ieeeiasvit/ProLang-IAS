#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fwalgo(int n, int a[][n]);

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int counter1 = 0; counter1 < n; counter1++)
    {
        for (int counter2 = 0; counter2 < n; counter2++)
        {
            char str[4];
            scanf("%s", str);
            if (strcmp(str,"INF")==0)
                a[counter1][counter2]=99999;
            else
            {
                int num = atoi(str);
                a[counter1][counter2] = num;
            }

        }
       
    }
    fwalgo(n, a);
    return (0);
}

void fwalgo(int n, int a[][n]) 
{
    int m[n][n];

    for (int counter1 = 0; counter1 < n; counter1++)
        for (int counter2 = 0; counter2 < n; counter2++)
            m[counter1][counter2] = a[counter1][counter2];

    for (int counter3 = 0; counter3 < n; counter3++) 
    {
        for (int counter1 = 0; counter1 < n; counter1++) 
        {
            for (int counter2 = 0; counter2 < n; counter2++) 
            {
                if (m[counter1][counter3] + m[counter3][counter2] < m[counter1][counter2])
                    m[counter1][counter2] = m[counter1][counter3] + m[counter3][counter2];
            }
        }
    }
    
    for (int counter1 = 0; counter1 < n; counter1++) 
    {
        for (int counter2 = 0; counter2 < n; counter2++) 
        {
            if (m[counter1][counter2] == 99999)
                printf("%s\n", "INF");
            else
                printf("%d\n", m[counter1][counter2]);
        }
        printf("\n");
    }
}