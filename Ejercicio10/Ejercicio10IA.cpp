#include <iostream>

using namespace std;

// Function to input matrix from user
void inputMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[][10], int transpose[][10], int row, int col) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}

// Function to display matrix
void display(int matrix[][10], int row, int col) {
    int i, j;

    cout << "Matrix:" << endl;
    for(i = 0; i < row; ++i) {
        for(j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
            if(j == col - 1)
                cout << endl << endl;
        }
    }
}

int main() {
    int matrix[10][10], transpose[10][10];
    int row, col;

    // Input dimensions of matrix
    cout << "Enter rows and column for matrix: ";
    cin >> row >> col;

    // Input elements of matrix
    cout << "Enter elements of matrix: " << endl;
    inputMatrix(matrix, row, col);

    // Transpose matrix
    transposeMatrix(matrix, transpose, row, col);

    // Display transposed matrix
    display(transpose, col, row);

    return 0;
}