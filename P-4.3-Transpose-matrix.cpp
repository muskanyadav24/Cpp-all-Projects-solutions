#include<iostream>
using namespace std;
int main(){

    int size,m=0;
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

    cout << endl << "The transpose matrix of an array : " << endl;

    for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout << array[j][i] << " ";
		}	
        cout << endl;
	}

    return 0;
}

// OUTPUT :-

// Enter the array row and column size :- 3
// Enter array element :- 
// Array [0][0] = 1
// Array [0][1] = 2
// Array [0][2] = 3
// Array [1][0] = 4
// Array [1][1] = 5
// Array [1][2] = 6
// Array [2][0] = 7
// Array [2][1] = 8
// Array [2][2] = 9

// The transpose matrix of an array : 
// 1 4 7 
// 2 5 8 
// 3 6 9 
