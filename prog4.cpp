#include <iostream>
using namespace std;

int main() {
    int m, n;
    
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int arr[m][n];

    cout<<endl << "Enter the elements of the matrix:"<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"arr["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }

    cout<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

    cout<<endl;
    int row, col;

    cout << "Enter the row index (0 to " << m-1 << "): ";
    cin >> row;
    cout << "Enter the column index (0 to " << n-1 << "): ";
    cin >> col;

    if (row < 0 || row >= m || col < 0 || col >= n) {
        cout << "Invalid row or column index!" << endl;
        return 1;
    }

    int rowSum = 0;
    for (int j = 0; j < n; j++) {
        rowSum += arr[row][j];
    }

    int colSum = 0;
    for (int i = 0; i < m; i++) {
        colSum += arr[i][col];
    }

    cout<<endl;
    cout << "Sum of elements in row " << row << ": " << rowSum << endl;
    cout << "Sum of elements in column " << col << ": " << colSum << endl;

    return 0;
}
