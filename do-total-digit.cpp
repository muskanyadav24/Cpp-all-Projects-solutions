//P-2.2 Total number of digits. using do-while-loop.

#include<iostream>
using namespace std;
int main(){
    int n,count=0;

    cout << "Enter the number :- ";
    cin >> n;

    do{
        n = n / 10;
        count++;
    }while(n!=0);

    cout << "Total number of digits :- " << count << endl;

    return 0;
}

// OUTPUT :- 

// Enter the number :- 754
// Total number of digits :- 3
