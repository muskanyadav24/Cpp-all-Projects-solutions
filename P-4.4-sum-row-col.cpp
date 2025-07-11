#include<iostream>
using namespace std;
int main(){

    int size,sum=0,row,col;
	int array[100][100];

    cout <<"Enter the array row and column size :- ";
    cin >> size;

	cout << "Enter array element :- " << endl;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout << "Array [" << i << "]["<< j << "] = ";
			cin >> array[i][j];
		}	
	}
    cout << "Enter the row Number :- " ;
    cin >> row;
    cout << "Enter the column Number :- " ;
    cin >> col;

    return 0;
}
