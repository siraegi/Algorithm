#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int n = 0;
        cin >> n;

        vector<int> m(n);
        vector<int> e(n);

        for (int j = 0; j < n; j++)
            cin >> m[j];

        for (int j = 0; j < n; j++)
            cin >> e[j];
        
        sort(e.begin(),e.begin()+n,greater<int>());

        
        for (int j = 0; j < n; j++)
            cout <<  e[j];
        
    }

    return 0;
}