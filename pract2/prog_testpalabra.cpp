#include "misfunciones.hpp"

#include <string>
#include <vector>
#include <iostream>

void PruebaOlasCalor(const std::string& idtest,
	      const std::string& s,
	       int num,
	       std::string esperado) {
    
    bool ok = misf::ObtenerPalabra(s, num) == esperado;
    std::cout << "Probando " << idtest << "... "
          <<"Esperado: "<<esperado<<" - Recibido: "
          <<misf::ObtenerPalabra(s, num)<<std::endl
	      << (ok ? "Ok" : "ERROR")
	      << std::endl;
}

int main(){
    
    std::string una_str = "buenos días, soy natalia ";
    
    PruebaOlasCalor("Test 1", una_str, 1, "buenos");
    
    PruebaOlasCalor("Test 2", una_str, 2, "días,");
    
    PruebaOlasCalor("Test 3", una_str, 3, "soy");
    
    PruebaOlasCalor("Test 4", una_str, 4, "natalia");
    
    PruebaOlasCalor("Test 5", "hola natalia", 0, "");
    
    PruebaOlasCalor("Test 6", "hola natalia", 1, "hola");
    
    PruebaOlasCalor("Test 7",  "hola natalia", 2, "natalia");
    
    PruebaOlasCalor("Test 8", "", 1, "");
    
    
    return 0;
}
