#include<iostream>
using namespace std;
int main(){
	
	int rowcol,largest=0;
	int array[100][100];

    cout <<"Enter the array row and column size :- ";
    cin >> rowcol;

	cout << "Enter array element :- " << endl;
	
	for(int i=0;i<rowcol;i++){
		for(int j=0;j<rowcol;j++){
			cout << "Array [" << i << "]["<< j << "] = ";
			cin >> array[i][j];
		}	
	}
	for (int i=0;i<rowcol;i++){
        for(int j=0;j<rowcol;j++){
           cout<< array[i][j]<<" ";
        }
        cout<<endl;
    }
	for(int i=0;i<rowcol;i++){
		for(int j=0;j<rowcol;j++){
			if(largest < array[i][j]){
				largest = array[i][j];
			}
		}
	}
	cout << "The largest element is :- " << largest << endl;
	
	return 0;
}

