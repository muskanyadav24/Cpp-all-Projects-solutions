// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int k=5;k>i;k--){
            cout << "  ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
