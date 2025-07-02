// * * * * * 
// *       * 
// * * * * * 
// *        
// *       

#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==3 ||j==1 ){
                cout << "*" << " ";
            }else if(i==2 && j==5){
                cout << "*" << " ";
            }else if(j==2 || j==3 || j==4){
                cout << "  ";
            }else if(i==4 && j==5){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
