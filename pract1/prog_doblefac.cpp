#include <iostream>
#include "misfunciones.hpp"

int main(){
    
    int num;
    long factorial = 1;

    
    std::cout<<"Introduce un número entero: "; std::cin>>num;
    
    if (num == 0 || num == 1){
        
        factorial = 1;
    }
    
    else if (misf::EsPar(num)){
    
        for (int i = 2; i <= num; i+=2){
            factorial *= i;
        }
    }
    else if (!misf::EsPar(num)){
       
        for (int i = 1; i <= num; i+=2){
            factorial *= i;}
    }
            
    std::cout<<num<<" !! = "<<factorial<<std::endl;
    return 0;
}


