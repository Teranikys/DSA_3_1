//
// Created by Влад on 02/04/2023.
//

#include "ADT_static.h"
#include "iostream"

//Предусловие. n – число заполняемых элементов, 0 < n < N, A– массив
//с переменной верхней границей.
//Постусловие. Заполненный массив A из n элементов.
//Нет возвращаемого значения.
void ADT_static::print(ADT_static x) {
    for (int i = 0; i < x.n; ++i){
        for (int j = 0; j < x.n; ++j) {
            std::cout << x.A[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

//Предусловие. n>0, A – выводимый массив
//Постусловие. Вывод значений массива. Нет возвращаемого значения.
void ADT_static::make(ADT_static &x, unsigned int size) {
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j) {
            std::cin >> x.A[i][j];
        }
    }
    x.n = size;
}

//Предусловие.x – выводимый двумерный массив.
//Постусловие. Массив x с нулевыми ячейками динамически
//заполненными ближайшими ненулевыми ячейками.
void ADT_static::zeroFillment(ADT_static &x) {
    for (int i = 0; i < x.n; ++i){
        for (int j = 0; j < x.n; ++j) {
            if(x.A[i][j] == 0){
                int min = INT_MAX;
                int val = -100;
                bool flag = false;
                for (int p = 0; p < x.n; ++p){
                    for (int q = 0; q < x.n; q++){
                        if (x.A[p][q] != 0) {
                            int temp = (abs(i - p) + abs(j - q));
                            if (temp < min) {
                                min = temp;
                                val = x.A[p][q];
                                flag = false;
                            } else if (min == temp) {
                                flag = true;
                            }
                        }
                    }
                }
                if (min != INT_MAX && !flag) {
                    x.A[i][j] = val;
                }
            }
        }
    }
}
