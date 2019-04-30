#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int hugs(const string& members, const string& fans){
    int N = members.size(), M = fans.size();
    vector <int> A(N), B(M);
    for(int i=0;i<N;i++)
        A[i] = (members[i] == 'M');
    for(int i=0;i<M;i++)
        B[M-i-1] = (fans[i] == 'M');
   // vector<int> C = karatsuba(A,B);

}
int main(){
    int c;
    cin >> c;
    for(int i=0;i<c;i++){
       // hugs();
    }
}