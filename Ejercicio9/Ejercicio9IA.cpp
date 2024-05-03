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

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    int i, j, k;

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < rowFirst; ++i) {
        for(j = 0; j < columnSecond; ++j) {
            mult[i][j] = 0;
        }
    }

    // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
    for(i = 0; i < rowFirst; ++i) {
        for(j = 0; j < columnSecond; ++j) {
            for(k=0; k<columnFirst; ++k) {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display matrix
void display(int mult[][10], int rowFirst, int columnSecond) {
    int i, j;

    cout << "Output Matrix:" << endl;
    for(i = 0; i < rowFirst; ++i) {
        for(j = 0; j < columnSecond; ++j) {
            cout << mult[i][j] << " ";
            if(j == columnSecond - 1)
                cout << endl << endl;
        }
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    // Input dimensions of first matrix
    cout << "Enter rows and column for first matrix: ";
    cin >> rowFirst >> columnFirst;

    // Input dimensions of second matrix
    cout << "Enter rows and column for second matrix: ";
    cin >> rowSecond >> columnSecond;

    // Check if the dimensions are compatible for multiplication
    if (columnFirst != rowSecond) {
        cout << "Error! column of first matrix not equal to row of second." << endl;
        return 0;
    }

    // Input elements of first matrix
    cout << "Enter elements of matrix 1: " << endl;
    inputMatrix(firstMatrix, rowFirst, columnFirst);

    // Input elements of second matrix
    cout << "Enter elements of matrix 2: " << endl;
    inputMatrix(secondMatrix, rowSecond, columnSecond);

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

    // Display resulting matrix
    display(mult, rowFirst, columnSecond);

    return 0;
}