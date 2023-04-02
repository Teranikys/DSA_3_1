//
// Created by Влад on 02/04/2023.
//

#ifndef DSA_3_1_ADT_STATIC_H
#define DSA_3_1_ADT_STATIC_H


const unsigned int N = 100;
typedef unsigned int typeitem;

struct ADT_static {
    //Определение данных АТД задачи
    unsigned int n = 0;
    typeitem A[N][N]{};
    //Заполнение множества с клавиатуры
    static void make(ADT_static &x, unsigned int size);
    //Вывод множества
    static void print(ADT_static x);
    //Заполнение нулевых ячеек массива ближайшими ненулевыми
    static void zeroFillment(ADT_static &x);
};

#endif //DSA_3_1_ADT_STATIC_H
