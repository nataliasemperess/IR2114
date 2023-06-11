#include <iostream>
#include "misfunciones.hpp"
#include <vector>
#include <string>
#include <algorithm>

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


std::string misf::ObtenerPalabra(const std::string& s, int numero){
    
    int contador = 0;
    
    std::string palab = "", final = "";
    std::vector<std::string> palabras;
    
    for (int i = 0; i <= s.size(); i++){
        if (s[i] != ' '){
            palab += s[i];
            
            if (i == s.size()-1){
                palabras.push_back(palab);
            }
        }
        else{
            if (i != 0 && s[i -1] != ' '){
                palabras.push_back(palab);
                palab = "";
            }
        }
    }
    
    if (palabras.size() > 0 && numero > 0 && numero <= palabras.size()){
        final = palabras[numero-1];
    }
    return final;
}
 
 
std::string misf::ConstruirLista(const std::vector<int>& v){
    
    std::string final = "", letra = ""; //final para almacenar la cadena final que se construirá,
    //letra se utiliza temporalmente para convertir cada elemento del vector a una cadena.
    
    if (v.size() > 0){ //Para verificar si vector tiene algún elemento dentro
        
        final = std::to_string(v[0]); //convertir el primer elemento del vector en una cadena
        
        for(int i = 1; i < v.size(); i++){
            letra = std::to_string(v[i]); // hace lo mismo a partir del segndo elem y lo guarda en letra
            
            if (i == v.size() - 1){ // verif si el elemento actuaal es el último elemento del vector
                final = final + " y " + letra;
            }
            else{
                final = final + ", " + letra;
            }
        }
    }
    return final;
}
 
int misf::OrdenarBurbuja(std::vector<int>& v) {
   int intercambios = 0;
   if (v.size() > 1) {
       bool bucle = true;
       while (bucle) {
           for (int i = 0; i < (v.size())-1; i++){
               if (v[i] > v[i+1]){
                   std::swap(v[i], v[i+1]);
                   intercambios++;
                   break;
                }
                if (i >= (v.size())-2)
                    bucle = false;
           }
       }
   }
   return intercambios;
}
    
    
    
    
    
    
    
    
