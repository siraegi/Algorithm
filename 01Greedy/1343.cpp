#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    char arr[501];
    string A = "AAAA";
    string B = "BB";
    string res = "";
    cin >> arr;
    int i = 0;
    while (arr[i] != '\0')
    {
        int n = 0;
        while (arr[i] == 'X')
        {
            n++; i++;
        }
     
        while (n > 3)
        {
            res += A;
            n -= 4;
        }
        if (n == 2)
        {
            res += B;
            n -= 2;
        }
        else if(n){
            cout << -1;
            return 0;
        }
        if(arr[i++]=='.'){
            res += ".";
        }
    }
    cout << res;
    return 0;
}