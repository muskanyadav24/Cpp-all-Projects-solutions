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
