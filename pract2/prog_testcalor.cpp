#include "misfunciones.hpp"
#include <iostream>
#include <vector>

void PruebaOlasCalor(const std::string& idtest, 
                     const std::vector<double>& v, 
                     int dias, double temp, int esperado){
    
    bool ok = misf::ContarOlasCalor(v, dias, temp) == esperado;
    
    std::cout<<"Probando "<<idtest<<"..."
             << (ok ? "Ok" : "ERROR")
             << std::endl;
             
}

int main(){
    
    PruebaOlasCalor("Test 1", {24.9, 25.0, 30.2, 19.9, 24.5 , ...
