//Създайте функция, която връща дали дадена квадратна матрица е симетрична спрямо главния си диагонал. Също създайте функция, която прави същото, но спрямо вторичния диагонал.

#include <iostream>

int main(){

    int** matrix = new int*[3];
    for(int i = 0; i < 3; i++){
        matrix[i] = new int[3];
    }

    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 3; j++){
            std::cin >> matrix[i][j];
        }
    }

    bool isSame = true;
    for(int i = 0; i < 3; i++){ 

        for(int j = 0; j < 3; j++){
            i != j && matrix[i][j] != matrix[j][i] ? isSame = false : isSame;
        }

    }
    std::cout << isSame;
    // for(int i = 0; i < 3; ++i){
    //     for(int j = 0; j < 3; ++j){  
    //         std::cout << matrix[i][j] << '\t';
    //     }
    //     std::cout << '\n';
    // }

    for(int i = 0; i < 3; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
}