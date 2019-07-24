#include <iostream>
using namespace std;
char a[1001];
char b[1001];
int main()
{
    int n;
    cin >> n >> a >> b;
    int i = 0;
    if (n % 2)
    {
        while (a[i] != '\0')
        {
            if (a[i] == b[i])
                break;
            i++;
        }
    }
    else
    {
        i=0;
        while (a[i] != '\0')
        {
            if (a[i] != b[i])
                break;
            i++;
        }
    }
    if(a[i]=='\0') cout << "Deletion succeeded";
    else cout << "Deletion failed";
    return 0;
}