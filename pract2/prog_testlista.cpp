#include "misfunciones.hpp"

#include <string>
#include <vector>
#include <iostream>

void PruebaConstruirLista(const std::string& idtest,
	      const std::vector<int>& v,
	       std::string esperado) {
    
    bool ok = misf::ConstruirLista(v) == esperado;
    std::cout << "Probando " << idtest << "... "
          <<"Esperado: "<<esperado<<" - Recibido: "
          <<misf::ConstruirLista(v)<<std::endl
	      << (ok ? "Ok" : "ERROR")
	      << std::endl;
}

int main(){
    
    
    PruebaConstruirLista("Test 1", {2,3,2,4,2}, "2, 3, 2, 4 y 2");
    
    PruebaConstruirLista("Test 2",{2, 3}, "2 y 3");
    
    PruebaConstruirLista("Test 3",{}, "");

    PruebaConstruirLista("Test 4",{2}, "2");
    
    PruebaConstruirLista("Test 5",{4,6,2,3}, "4, 6, 2 y 3");

    

    
    return 0;
}
