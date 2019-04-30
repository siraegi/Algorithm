#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   int c;

   cin >> c;

   for (int i = 0; i < c; i++)
   {
      int n = 0;
      int sum = 0;
      int result = 0;

      cin >> n;

      vector<int> str(n);

      for (int j = 0; j < n; j++)
      {
         cin >> str[j];
      }

      sort(str.begin(), str.begin() + n);

      while (str.size() > 1)
      {
         sum = (str[0] + str[1]);
         str.erase(str.begin(), str.begin() + 2);
         str.push_back(sum);
         result += sum;
         sort(str.begin(), str.begin() + n);
      }

      cout << result<< " ";
   }

   return 0;
}