#include "matrix.h"
#include <cassert> 
#include <utility>


Matrix::Matrix(int nRows, int nColumns) : rows{nRows}, columns{nColumns} {
    matrix = new double*[nRows];
    for(int i = 0; i < nRows; i++){
        matrix[i] = new double[nColumns] {0.0};
    }
}



Matrix::Matrix(int nRows) : Matrix{nRows, nRows} {
    for(int i = 0; i < nRows; i++){
        matrix[i][i] = 1;
    }
}

Matrix::~Matrix(){
     for(int i = 0; i < rows; i++){
        delete[] matrix[i];
    }
}



double Matrix::get(int row, int col) const{
    double el = matrix[row][col];
    return el;
}
void Matrix::set(int row, int col, double value){
    matrix[row][col] = value;
}

int Matrix::getColumns() const{
    return columns;
}

int Matrix::getRows() const{
    return rows;
}

ostream& operator<<(ostream &os,const Matrix &Matrix){
    for(int i = 0; i < Matrix.getRows(); i++){
        for(int j = 0; j < Matrix.getColumns(); j++){
            os << Matrix.get(i,j) << " ";
        }
        os << endl;   
    }
    return os;
}


Matrix::Matrix(const Matrix &rhs) : matrix{nullptr}{
    matrix = new double*[rhs.getRows()];

    for (int i = 0; i < rhs.getRows(); i++)
            matrix[i] = new double[rhs.getColumns()];

    for(int i = 0; i < rhs.getRows(); i++){
        for(int j = 0; j < rhs.getColumns(); j++){
            matrix[i][j] = rhs.get(i,j);
        }
    }
}
   
template<class T> void swap( T& a, T& b);

Matrix &Matrix::operator=(Matrix &m){
    std::swap(this-> columns, m.columns);
    std::swap(this-> rows, m.rows);
    std::swap(this-> matrix, m.matrix);
    return *this;
}


Matrix &Matrix::operator+=(Matrix &m){
    for(int i = 0; i < m.rows; i++){
        for(int j = 0; j < m.columns; j++){
           matrix[i][j] +=  m.get(i,j);
        }
    }
    return *this;
}


Matrix &Matrix::operator+(Matrix &m){
    Matrix new_mat(m.getRows(), m.getColumns());
    for(int i = 0; i < m.getRows(); i++){
        for(int j = 0; j < m.getColumns(); j++){
           new_mat.matrix[i][j] = matrix[i][j] + m.get(i,j);
        }
    }
    return new_mat;
}

