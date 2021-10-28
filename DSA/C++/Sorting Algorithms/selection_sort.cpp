#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[m])
            {
                m = j;
            }
        }
        swap(a[i], a[m]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
