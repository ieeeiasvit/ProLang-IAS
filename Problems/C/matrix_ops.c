#include <stdio.h>
#include <stdlib.h>

int i, j, r1, c1, r, c;

void input (int (*e)[c1], int (*d)[c])
{
    printf("\nEnter matrix 1 elements:\n");
    for (i= 0; i < r1; i++)
        for (j= 0; j < c1; j++)
            scanf("%d", &e[i][j]);

    printf("\nEnter matrix 2 elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &d[i][j]);
}

void add_sub (int (*e)[c1], int (*d)[c])
{
    int add[r][c], sub[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            add[i][j]= *(*(e+i)+j) + *(*(d+i)+j);
            sub[i][j]= *(*(e+i)+j) - *(*(d+i)+j);
        }
    }
    printf("\nSum of the matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", add[i][j]);
        printf("\n");
    }
    printf("\nDifference of the matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", sub[i][j]);
        printf("\n");
    }
}

void mult (int (*e)[c1], int (*d)[c])
{
    int mul[r1][c], s, k;
    for (i= 0; i < r1; i++)
    {
        for (j= 0; j < c; j++)
        {
            s= 0;
            for (k= 0; k < r; k++)
                s+= (*(*(e+i)+k)) * (*(*(d+k)+j));

            mul[i][j]= s;
        }
    }
    printf("\nProduct of the matrices:\n");
    for (i= 0; i < r1; i++)
    {
        for (j= 0; j < c; j++)
            printf("%d\t", mul[i][j]);
        printf("\n");
    }
}

int main ()
{
    int f= 0, f1= 0;
    printf("Enter rows & columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows & columns of matrix 2: ");
    scanf("%d %d", &r, &c);

    if (r1 != r || c1 != c)
    {
        printf("\nAddition & Subtraction not possible !\n");
        f= 1;
    }
    if (c1 != r)
    {
        printf("\nProduct not possible.\n");
        f1= 1;
    }
    if (f == 1 && f1 == 1)
        return 0;

    int a[r1][c1], b[r][c];
    input (a,b);
    if (f == 0)
        add_sub (a, b);
    if (f1 == 0)
        mult (a, b);

    return 0;
}
