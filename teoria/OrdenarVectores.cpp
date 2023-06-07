#include <iostream> // Biblioteca para E/S estándar
#include <vector>
#include <algorithm>

const int MAXTALLA = 20; // Define macrollamada con valor de 20  

class Vector{
private:
    int *buffer;
    int talla;
    void swap(int &, int &);
public:
    Vector(int);
    ~Vector();
    void ordenar();
    void leer();
    void imprimir() const;
};

// Las funciones constructora y destructora garantizan la inicialización y eliminación de la memoria dinámica

Vector::Vector(int n=MAXTALLA){ // Constructor 
    
    if (n >= MAXTALLA){
        talla = MAXTALLA;
    }
    else{
        talla = n;
        buffer = new int [talla];
    }
}

inline Vector::~Vector(){ // Destructor
    
    delete [] buffer;
}

void Vector::ordenar(){ // Ordena el array
    
    for (int i = talla -1; i>=1; i--){
        for (int j = 0; j < i; j++){
            if (buffer[j] > buffer[j+1]){
                swap(buffer[j], buffer[j+1]);
            }
        }
    }
}


inline void Vector::swap(int & x, int & y){ // Intercambia los valores de x e y
    
    int temp = x;
    x = y;
    y = temp;
}


 
void Vector::leer(){ // Leer el buffer

    for (int i = 0; i < talla; i++){
        std::cout<<"Introduce un número: ";
        std::cin >> buffer[i];
    }
}

void Vector::imprimir() const{ //Imprimir el buffer
            
    for (int i = 0; i < talla; i++){
        std::cout << buffer[i]<<" "<<std::endl;
    }
}


int main(){
    
    Vector v1(5), v2(7);

    v1.leer();
    v1.ordenar();
    v1.imprimir();
    
    v2.leer();
    v2.ordenar();
    v2.imprimir();
    
    return 0;
}
