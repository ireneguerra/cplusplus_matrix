#include "matrix_multiplication.hpp"

void multiplyMatrices(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b, std::vector<std::vector<double>>& c) {
    int n = a.size(); // Obtener el tamaño de las matrices

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j] = 0; // Inicializar c a 0
            for (int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}



