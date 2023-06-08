#include <iostream>
#include "misfunciones.hpp"

int main(){
    int num;
    int contador = 0;
    int i = 1;
    
    std::cout<<"Introduce un número entero: "; std::cin >> num;
    
    std::cout << "Los " << num << " menores números primos son: ";
    
    while (contador < num){
        if (misf::EsPrimo(i)){
            std::cout<<i<<' ';
            contador++;
        }
        i++;
    }
    std::cout<<std::endl;
    return 0;
}
