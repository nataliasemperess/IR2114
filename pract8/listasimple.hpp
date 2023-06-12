#ifndef LISTASIMPLE_INCLUDED_
#define LISTASIMPLE_INCLUDED_

#include <iostream>

class ListaSimple{
    
    struct Nodo{
        int dato;
        Nodo* sig;
        Nodo(int d, Nodo* s);
    };
    
    Nodo* ini_;
    Nodo* fin_;
    int talla_;
    
public:
    
    ListaSimple(); // Constructor predeterminado
    ListaSimple(const ListaSimple& otra); // Constructor copia
  //  ~ListaSimple(); //Destructor
    
    ListaSimple& operator=(const ListaSimple& otra); //Operador de asignación
    
    ListaSimple& AnyadirIni(int a);
    ListaSimple& AnyadirFin(int a);
    
    ListaSimple& QuitarIni();
    ListaSimple& QuitarFin();
    
    int talla() const;
    
    bool EstaVacia() const;
    
    friend std::ostream &operator<<(std::ostream& os, const ListaSimple& lis); // Función amiga operator para sobrecargar el operador de inserción de flujo ('<<')
    
};

#endif
