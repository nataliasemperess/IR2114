#include <iostream>
#include "listasimple.hpp"

int main(){
    
    ListaSimple ls;

    ls.AnyadirFin(3).AnyadirFin(6).AnyadirFin(2);
    
    std::cout << ls;
}
