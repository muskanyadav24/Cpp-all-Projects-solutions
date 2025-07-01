// 41 
// 41 42 
// 41 42 43 
// 41 42 43 44 
// 41 42 43 44 45

#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << "4" << j << " ";
        }
        cout << endl;
    }

    return 0;
}
