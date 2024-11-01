//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, cols, initial_value;
//
//    cout << "Enter the number : ";
//    cin >> rows;
//    cout << "Enter the number ";
//    cin >> cols;
//    cout << "Enter the initial value: ";
//    cin >> initial_value;
//
//    int array[rows][cols];
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (i == 0 && j == 0) {
//                array[i][j] = initial_value;
//            }
//            else if (j == 0) {
//                array[i][j] = array[i - 1][cols - 1] * 2;
//            }
//            else {
//                array[i][j] = array[i][j - 1] * 2;
//            }
//        }
//    }
//
//    cout << "Generated Array:" << endl;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



//int main() {
//    int rows, cols, initial_value;
//
//    cout << "Enter the number  ";
//    cin >> rows;
//    cout << "Enter the number: ";
//    cin >> cols;
//    cout << "Enter the initial value: ";
//    cin >> initial_value;
//
//    int array[rows][cols];
//
//
//    int value = initial_value;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = value;
//            value++;
//        }
//    }
//
//    cout << "Generated Array:" << endl;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



//
//void printArray(int array[][5], int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void shiftRight(int array[][5], int rows, int cols, int shift) {
//    for (int k = 0; k < shift; ++k) {
//        for (int i = 0; i < rows; ++i) {
//            int last = array[i][cols - 1];
//            for (int j = cols - 1; j > 0; --j) {
//                array[i][j] = array[i][j - 1];
//            }
//            array[i][0] = last;
//        }
//    }
//}
//
//int main() {
//    const int rows = 2;
//    const int cols = 5;
//    int array[rows][cols] = { {1, 2, 0, 4, 5}, {3, 4, 5, 3, 9} };
//
//    cout << "Original Array:" << endl;
//    printArray(array, rows, cols);
//
//    int shift;
//    cout << "Enter the number of shifts to the right: ";
//    cin >> shift;
//
//    shiftRight(array, rows, cols, shift);
//
//    cout << "Array after shifting to the right:" << endl;
//    printArray(array, rows, cols);
//
//    return 0;
//}
//










