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


int misf::ContarOlasCalor(std::vector<double>& v, int dias, double temp){
    
    int dias_cons = 0;
    int olas_de_calor = 0;
    
    
    for (int i = 0; i <= v.size(); i++){
        
        if (v[i] > temp){
            dias_cons++;
            if (dias_cons > dias){
               olas_de_calor++;
            }
        }
        else{
            dias_cons = 0;
        }
    }
    return olas_de_calor;
}
        
    
    
    
    
