#include <iostream>
#include "misfunciones.hpp"

bool misf::EsPar(int n){
    return (n % 2 == 0);
}
        
        
bool misf::EsPrimo(int num){
    
    if (num < 0 || num == 1){
        return false;
    }
    for (int i = 2; i <  num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int misf::ContarDivisores(int num){
    
    int divisores = 0;
    
    if (num == 1){
        divisores = 1;
    }
    else{
        for (int i = 1; i <= num; i++){
            if (num % i == 0){
                divisores++;
            }
        }
    }
    return divisores;
}
