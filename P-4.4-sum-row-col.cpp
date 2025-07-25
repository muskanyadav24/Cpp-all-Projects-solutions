#include<iostream>
using namespace std;

int main() {
    int size, row, col;
    int array[100][100];
    int sum = 0;

    cout << "Enter the array row and column size: ";
    cin >> size;

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Array[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }

    cout << "Enter the row number (0 to " << size - 1 << "): ";
    cin >> row;

    cout << "Enter the column number (0 to " << size - 1 << "): ";
    cin >> col;

    // Validate row and column input
    if (row >= size || col >= size || row < 0 || col < 0) {
        cout << "Invalid row or column number!" << endl;
        return 1;
    }

    // Print selected row
    cout << "\nRow " << row << ": ";
    for (int i = 0; i < size; i++) {
        cout << array[row][i] << " ";
    }

    // Print selected column
    cout << "\nColumn " << col << ": ";
    for (int i = 0; i < size; i++) {
        cout << array[i][col] << " ";
    }

    // Sum of selected row
    sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[row][i];
    }
    cout << "\nSum of Row " << row << ": " << sum;

    // Sum of selected column
    sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i][col];
    }
    cout << "\nSum of Column " << col << ": " << sum << endl;

    return 0;
}

// OUTPUT :-

// Enter the array row and column size: 3
// Enter array elements:
// Array[0][0] = 1
// Array[0][1] = 2
// Array[0][2] = 3
// Array[1][0] = 4
// Array[1][1] = 5
// Array[1][2] = 6
// Array[2][0] = 7
// Array[2][1] = 8
// Array[2][2] = 9
// Enter the row number (0 to 2): 0
// Enter the column number (0 to 2): 2

// Row 0: 1 2 3 
// Column 2: 3 6 9 
// Sum of Row 0: 6
// Sum of Column 2: 18
