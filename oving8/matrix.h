#pragma once
#include <iostream>

using namespace std;

class Matrix{
    protected:
        int rows;
        int columns;
        double **matrix;
    public:
        Matrix(int nRows, int nColumns);
        ~Matrix();
        explicit Matrix(int nRows);
        Matrix(const Matrix &rhs);
        double get(int row, int col) const; 
        void set(int row, int col, double value);
        int getRows() const;
        int getColumns() const;
        friend ostream& operator<<(ostream &os,const Matrix &Matrix);
        Matrix &operator=(Matrix m);
        Matrix &operator+=(Matrix m);
        Matrix operator+(Matrix m);
};