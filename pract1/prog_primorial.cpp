#include <iostream>
#include "misfunciones.hpp"

int main(){
    
    int num;
    int primorial = 1;
    
    std::cout<<"Introduce un número entero :  "; std::cin >> num;
    
    for (int i = 0; i <= num; i++){
        if (misf::EsPrimo(i)){
            primorial *= i;
        }
    }
    std::cout<<num<<" # = " <<primorial<<std::endl;
    
    return 0;
    
    
}
//
