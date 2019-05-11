#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int n, w;
    int result;
    for (int k = 0; k < c; k++)
    {
        result=0;
        cin >> n >> w;
        vector<string> name(n);
        vector<int> v(n);
        vector<int> j(n);
        for (int i = 0; i < n; i++)
        {
            cin >> name[i] >> v[i] >> j[i];
            cout << name[i] << v[i] << j[i];
        }
    }
    return 0;
}
