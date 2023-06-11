#include <iostream>
#include "misfunciones.hpp"

int main(){
    
    int num;

    long primorial = 1;
    
    std::cout<<"Introduce un número entero :  "; std::cin >> num;


    for (int i = 1; i <= num; i++){
        if (misf::EsPrimo(i)){
            primorial *= i;
        }
    }
    std::cout<<num<<" # = " <<primorial<<std::endl;
    
    return 0;
    
    
}
