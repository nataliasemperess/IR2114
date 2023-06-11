#include <iostream>
#include "misfunciones.hpp"
#include <vector>

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


int misf::ContarOlasCalor(const std::vector<double>& v, int dias, double t) {
    
    int dias_cons = 0, olas_calor = 0;
    
    for (int i = 0; i <= v.size(); i++) {
        
        if (v[i] > t) {
            dias_cons++;
            
            if (dias_cons == (dias + 1)){
                olas_calor++;}
            
            if (v[i + 1] <= t){
                dias_cons = 0;}
        }
    }
    return olas_calor;
}

    
    
    
