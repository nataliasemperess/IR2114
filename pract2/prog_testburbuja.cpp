#include "misfunciones.hpp"

#include <string>
#include <vector>
#include <iostream>

void PruebaOrdenarBurbuja(const std::string& idtest,
	      std::vector<int>& v,
          const std::vector<int>& v_esperado,
	      int n_esperado) {
    bool ok = (misf::OrdenarBurbuja(v) == n_esperado && v == v_esperado);
    std::cout << "Probando " << idtest << "... "
	      << (ok ? "Ok" : "ERROR")
	      << std::endl;
}

int main() {


    PruebaOrdenarBurbuja("Test 1", {}, {},  0);
    PruebaOrdenarBurbuja("Test 2", {4}, {4}, 0);
    PruebaOrdenarBurbuja("Test 3", {4, 5}, {4, 5}, 0);
    PruebaOrdenarBurbuja("Test 4", {4, -5}, {-5, 4}, 1);
    PruebaOrdenarBurbuja("Test 5", {4, 5, 2}, {2, 4, 5}, 1);
    PruebaOrdenarBurbuja("Test 6", {3, 2, 1, 6}, {1, 2, 3, 6}, 2);


    return 0;
}
