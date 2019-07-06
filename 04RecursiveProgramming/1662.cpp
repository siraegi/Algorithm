// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     stack<char> s;
  
//     unsigned int cnt = 0;
//     char ch;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ')')
//         {
//             // '(' 나올 때까지 pop
//             while ((ch = s.top()) != '(')
//             {
//                 s.pop();
//                 // 중간 문자열개수 세고
//                 cnt++;
//             }
//             s.pop();
//             // '(' 앞의 한 문자 숫자로 바꿔서 문자열 반복 횟수 추출
//             cnt *= (s.top() - '0');
//             s.pop();
//             //cout << cnt<<endl;
//         }
//         else
//         {
//             s.push(str[i]);
//         }
//     }
//     while(!s.empty()){
//         s.pop();
//         cnt++;
//     }
//     cout << cnt;
//     return 0;
// }
#include <iostream>
#include <string>
#include <stack>
using namespace std;
string str;
//()안의 내용만 함수 호출
unsigned int archive(int l, int r)
{
    int cnt = 0;
    if (str[l + 1] == ')')
        return 1;
    while (1)
    {
        while (str[l + 1] != '(')
        {   
            cnt++;
            l++;
        }
        cnt += ((str[l]-'0') * archive(l + 2, r));
        while (str[l++] != ')');
        if(str[l] == ')')
        {
            break;
        }
    }
    return cnt;
}
int main()
{
    cin >> str;
    unsigned int cnt = 0;
    cout << archive(0,str.length()-1);
    
}