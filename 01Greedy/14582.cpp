#include <iostream>
using namespace std;
int main(){
    int J[10]={0};
    int G[10]={0};
    bool flag=false;
    for(int i=0;i<9;i++){
        cin >> J[i];
    }

    for(int i=0;i<9;i++){
        cin >> G[i];
        J[9]+=J[i];
        if(G[9]<J[9]) {
           flag=true;
        }
        G[9]+=G[i];
    }
    
    flag? cout << "Yes":cout << "No";
    
    return 0;
}