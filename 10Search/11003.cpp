#include <iostream>
#include <queue>
using namespace std;
int main(){
    int N, L;
    cin >> N >> L;
    int a[N+1];
    for(int i=0;i<N;i++)
        cin >> a[i];
    
    deque<int> q;
 
    for(int r=0;r<N;r++){
        if(q.empty()) q.push_back(r);
        else if(r-q.front() < L){
            while(a[q.back()]>a[r])
                q.pop_back();
            q.push_back(r);
        }
        else{
            q.pop_front();
        }
        for(int i=0;i<q.size();i++){
             cout << a[q[i]] <<" ";
        }
        cout << endl;
        //cout << a[q.front()]<< " ";
    }
    return 0;
}