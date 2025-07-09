#include<iostream>
using namespace std;
int main(){
	
	int size;
	
	cout << "Enter the array size :- ";
	cin >> size;
	
	int array[100];
	
	for(int i=0;i<size;i++){
		cout << "Array [" << i << "]" << " = ";
			cin >> array[i]; 
	}
		
	cout << endl << "Negative element from an array :- ";
		
	for(int i=0;i<size;i++){
		if(array[i]<0){
			cout << array[i] << " ," ;
		}else{
			cout << " ";
		}
	}
	return 0;
}

// OUTPUT :- 

// Enter the array size :- 5
// Array [0] = 1
// Array [1] = -2
// Array [2] = 34
// Array [3] = -67
// Array [4] = 21

// Negative element from an array :-  -2 , -67 ,

