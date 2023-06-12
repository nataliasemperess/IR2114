#include <iostream>
#include "listasimple.hpp"
#include <sstream>
#include <string>

ListaSimple::Nodo::Nodo(int d, Nodo* s) : dato(d), sig(s){} // Constructor Nodo

ListaSimple::ListaSimple() : ini_(nullptr), fin_(nullptr), talla_(0){} // Constructor por defecto

ListaSimple& ListaSimple::AnyadirFin(int a){
    
    Nodo* pn = new Nodo(a, nullptr);
    
    if (fin_ == nullptr){  // Verificar si la lista esta vacía
        ini_ = pn;
    }
    else{
        fin_ -> sig = pn; // Se asigna el puntero pn al puntero sig del ultimo nodo de la lista (fin_)
    }
    
    fin_ = pn; // Se actualiza;
    
    ++talla_;
    
    return *this;
}


std::ostream &operator<<(std::ostream& os, const ListaSimple& ls){
    
    ListaSimple::Nodo* nodo = ls.ini_;
    
    while (nodo != nullptr){
        os << nodo->dato << " -> ";
        nodo = nodo -> sig;
    }
    os << "Nulo"<<std::endl;
    return os;}
    
/*
    
std::ostream &operator<<(std::ostream& os, const ListaSimple& lis) {
    if (lis.ini_){
        ListaSimple::Nodo* nodo = lis.ini_;
        os << nodo->dato;
        while (nodo->sig){
            nodo = nodo->sig;
            os << " -> ";
            os << nodo->dato;
        }
    }
    std::string final = " -> Nulo";
    os << final;

    return os;
}*/
