#include <iostream>

void readMatrix(int** matrix, int rows, int cols)
{
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            std::cout << "enter [" << i << "][" << j << "] = ";  
            std::cin >> matrix[i][j];
            std::cout << '\n';
        }
    }
}   

int main(){
    
    int rows = 5;
    int cols = 4;

    int** matrix = new int*[rows];
    for(int i = 0; i < rows; ++i){
        matrix[i] = new int[cols];
    }

    readMatrix(matrix, rows, cols);

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){  
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < rows; ++i){
        delete[] matrix[i];
    }
    delete[] matrix;
}