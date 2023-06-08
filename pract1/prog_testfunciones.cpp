#include <iostream>
#include "misfunciones.hpp"


void PruebaEsPar(int n, bool esperado){
    
    bool ok = misf::EsPar(n) == esperado;
    
    std::cout<<"Probando EsPar(" << n <<")... "
        <<(ok? "Ok" : "ERROR")
        <<std::endl;
}


void PruebaEsPrimo(int n, bool esperado){
    
    bool ok = misf::EsPrimo(n) == esperado;
    
    std::cout<<"Probando EsPrimo(" << n <<")... "
        <<(ok? "Ok" : "ERROR")
        <<std::endl;
}

void PruebaContarDivisores(int n, int esperado){
    
    bool ok = misf::ContarDivisores(n) == esperado;
    
    std::cout<<"Probando ContarDivisores(" << n <<")... "
        <<(ok? "Ok" : "ERROR")
        <<std::endl;
}

int main(){
    
    PruebaEsPar(0, true);
    PruebaEsPar(1, false);
    PruebaEsPar(5, false);
    PruebaEsPar(200, true);
    PruebaEsPar(124232237, false);
    
    PruebaEsPrimo(2, true);
    PruebaEsPrimo(1, false);
    PruebaEsPrimo(25, false);
    PruebaEsPrimo(997, false);
    PruebaEsPrimo(998, false);
    
    
    PruebaContarDivisores(2,2);
    PruebaContarDivisores(47,2);
    PruebaContarDivisores(69,4);
    PruebaContarDivisores(100,9);
    PruebaContarDivisores(200,12);
    
    
    return 0;
}
