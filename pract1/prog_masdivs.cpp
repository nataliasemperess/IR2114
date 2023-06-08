#include <iostream>
#include "misfunciones.hpp"

int main(){
    
    int num;
    int divisores, mas_divisores = 0, num_divisores = 0;
    
    std::cout<<"Introduce un número entero: "; std::cin>>num;
    
    for (int i = 1; i <= num; i++){
        
        divisores = misf::ContarDivisores(i);
        
        if (divisores >= num_divisores){
            mas_divisores = i;
            num_divisores = divisores;
        }
    }
    std::cout<<"El número con más divisores es: "<<mas_divisores<<" (tiene " << num_divisores<< ")"<<std::endl; 
    return 0;
}
