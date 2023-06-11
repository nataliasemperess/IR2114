#include "misfunciones.hpp"

#include <string>
#include <vector>
#include <iostream>

void PruebaOlasCalor(const std::string& idtest,
	       const std::vector<double>& v,
	       int dias, double temp,
	       int esperado) {
    bool ok = misf::ContarOlasCalor(v, dias, temp) == esperado;
    std::cout << "Probando " << idtest << "... "
	      << (ok ? "Ok" : "ERROR")
	      << std::endl;
}

int main(){
    
    PruebaOlasCalor("Test 1", {24.9, 25.0, 30.2, 19.9, 24.5}, 2, 23.5, 1);
    
    PruebaOlasCalor("Test 2", {32.0, 33.0, 30.2, 29.5, 30.0}, 2, 20.0 , 1);
    
    PruebaOlasCalor("Test 3", {10.0, 9.5, 7.0, 11.5, 12.5}, 1, 9.0, 2);
    
    PruebaOlasCalor("Test 4", {24.9, 25.0, 17.0, 23.3, 24.5}, 1, 21.0, 2);
    
    PruebaOlasCalor("Test 5", {25.9, 25.0, 20.2, 24.9, 26.5, 18.9, 21.0}, 1, 20.5, 2);
    
    return 0;
}
