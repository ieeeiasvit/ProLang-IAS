#include<stdio.h>
void matrixMultiplication(int* M1, int* M2, int* M3, int n);
void matrixAddition(int* M1, int* M2, int* M3, int n, int size);
void matrixSubtraction(int* M1, int* M2, int* M3, int n, int size);

void main()
{
    int n;
    scanf("%d", &n);
    int M1[n][n], M2[n][n], M3[n][n];

    for (int row_counter = 0; row_counter < n; row_counter++)
        for (int column_counter = 0; column_counter < n; column_counter++)
            scanf("%d", &M1[row_counter][column_counter]);

    for (int row_counter = 0; row_counter < n; row_counter++)
        for (int column_counter = 0; column_counter < n; column_counter++)
            scanf("%d", &M2[row_counter][column_counter]);

    matrixMultiplication(M1, M2, M3, n);

    for (int row_counter = 0; row_counter < n; row_counter++)
        for (int column_counter = 0; column_counter < n; column_counter++)
            printf("%d\n", M3[row_counter][column_counter]);
}

void matrixMultiplication(int* M1, int* M2, int* M3, int n)
{
    if (n == 2)
    {
        int P = (*M1 + *(M1 + n + 1)) * (*M2 + *(M2 + n + 1));
        int Q = (*(M1 + n) + *(M1 + n + 1)) * (*M2);
        int R = (*M1) * (*(M2 + 1) - *(M2 + n + 1));
        int S = (*(M1 + n + 1)) * (*(M2 + n) - *M2);
        int T = (*M1 + *(M1 + 1)) * (*(M2 + n + 1));
        int U = (*(M1 + n) - *M1) * (*M2 + *(M2 + 1));
        int V = (*(M1 + 1) - *(M1 + n + 1)) * (*(M2 + n) + *(M2 + n + 1));
        *M3 = P + S - T + V;
        *(M3 + 1) = R + T;
        *(M3 + n) = Q + S;
        *(M3 + n + 1) = P + R - Q + U;
    }
    else
    {
        int A[n / 2][n / 2], B[n][n], C[n][n];

        for (int row_counter = 0; row_counter < n; row_counter++)
            for (int column_counter = 0; column_counter < n; column_counter++)
                C[row_counter][column_counter] = 0;

        int P[n / 2][n / 2], Q[n / 2][n / 2], R[n / 2][n / 2], S[n / 2][n / 2], T[n / 2][n / 2], U[n / 2][n / 2], V[n / 2][n / 2], W[n / 2][n / 2], X[n / 2][n / 2], Y[n / 2][n / 2], Z[n / 2][n / 2];

        matrixAddition(M1, M1 + (n / 2) * (n + 1), A, n, 1);
        matrixAddition(M2, M2 + (n / 2) * (n + 1), B, n, 1);
        matrixMultiplication(A, B, P, (n / 2));
        matrixAddition(M1 + (n / 2) * n, M1 + (n / 2) * (n + 1), A, n, 1);
        matrixAddition(M2, C, B, n, 1);
        matrixMultiplication(A, B, Q, (n / 2));
        matrixAddition(M1, C, A, n, 1);
        matrixSubtraction(M2 + (n / 2), M2 + (n / 2) * (n + 1), B, n, 1);
        matrixMultiplication(A, B, R, (n / 2));
        matrixAddition(M1 + (n / 2) * (n + 1), C, A, n, 1);
        matrixSubtraction(M2 + (n / 2) * n, M2, B, n, 1);
        matrixMultiplication(A, B, S, (n / 2));
        matrixAddition(M1, M1 + (n / 2), A, n, 1);
        matrixSubtraction(M2 + (n / 2) * (n + 1), C, B, n, 1);
        matrixMultiplication(A, B, T, (n / 2));
        matrixSubtraction(M1 + (n / 2) * n, M1, A, n, 1);
        matrixAddition(M2, M2 + (n / 2), B, n, 1);
        matrixMultiplication(A, B, U, (n / 2));
        matrixSubtraction(M1 + (n / 2), M1 + (n / 2) * (n + 1), A, n, 1);
        matrixAddition(M2 + (n / 2) * n, M2 + (n / 2) * (n + 1), B, n, 1);
        matrixMultiplication(A, B, V, (n / 2));
        matrixSubtraction(V, T, A, (n / 2), 0);
        matrixAddition(S, A, B, (n / 2), 0);
        matrixAddition(P, B, W, (n / 2), 0);
        matrixAddition(R, T, X, (n / 2), 0);
        matrixAddition(Q, S, Y, (n / 2), 0);
        matrixSubtraction(U, Q, A, (n / 2), 0);
        matrixAddition(P, A, B, (n / 2), 0);
        matrixAddition(R, B, Z, (n / 2), 0);

        for (int counter1 = 0; counter1 < (n / 2); counter1++)
        {
            for (int counter2 = 0; counter2 < (n / 2); counter2++)
            {
                *(M3 + counter1 * n + counter2) = W[counter1][counter2];
                *(M3 + (n / 2) + counter1 * n + counter2) = X[counter1][counter2];
                *(M3 + ((n / 2) + counter1) * n + counter2) = Y[counter1][counter2];
                *(M3 + ((n / 2) + counter1) * n + counter2 + (n / 2)) = Z[counter1][counter2];
            }
        }
    }
}

void matrixAddition(int* M1, int* M2, int* M3, int n, int size)
{
    int temp;
    if (size > 0)
        temp = n / 2;
    else
        temp = n;

    for (int row_counter = 0; row_counter < temp; row_counter++)
        for (int column_counter = 0; column_counter < temp; column_counter++)
            *(M3 + row_counter * temp + column_counter) = *(M1 + row_counter * n + column_counter) + *(M2 + row_counter * n + column_counter);
}

void matrixSubtraction(int* M1, int* M2, int* M3, int n, int size)
{
    int temp;
    if (size > 0)
        temp = n / 2;
    else
        temp = n;

    for (int row_counter = 0; row_counter < temp; row_counter++)
        for (int column_counter = 0; column_counter < temp; column_counter++)
            *(M3 + row_counter * temp + column_counter) = *(M1 + row_counter * n + column_counter) - *(M2 + row_counter * n + column_counter);
}
