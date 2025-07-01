// The sum of first and last digit. using while-loop.

#include<iostream>
using namespace std;
int main(){
    int n,first,last,sum=0;

    cout << "Enter the number :- ";
    cin >> n;

    last = n % 10; 
    first = n;

    while(first>9){
        first = first / 10;
    }
    sum = first + last;

    cout << "First digit :- " << first << endl ;
    cout << "Last digit :- " << last << endl ;
    cout << "The sum of first and last digit :- " << sum << endl;

    return 0;
}