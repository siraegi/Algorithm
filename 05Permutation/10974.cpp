#include <iostream>
#include <algorithm>
#define Swap(a, b) { int t;t = a;a = b;b = t;}
using namespace std;
int num[10001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
        cout << num[i] <<" ";
    }

    while (1)
    {
        printf("\n");
        int i;
        for (i = n - 1; i > 0; i--)
        {
            if (num[i] > num[i - 1])
            {
                break;
            }
        }
        if (i == 0) break;
        else
        {
            i--;
            for (int j = n - 1; j > i; j--)
            {
                if (num[j] > num[i])
                {
                    swap(num[j], num[i]);
                    break;
                }
            }
            sort(num + (i + 1), num + n);
            for (int i = 0; i < n; i++)
                cout << num[i] << " ";
        }
    }
    return 0;
}