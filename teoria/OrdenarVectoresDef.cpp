#include <iostream> 
#include <vector>
#include <algorithm>
 
void leer(std::vector<int> & v){ 
    
    for (int i = 0; i < v.size(); i++){
        std::cout<<"Introduce un número: ";
        std::cin >> v[i];
    }
}

void imprimir(std::vector<int> & v) {
            
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i]<<" "<<std::endl;
    }
}


int main(){
    
    std::vector<int> v1(5), v2(7);

    leer(v1);
    sort(v1.begin(), v1.end());
    imprimir(v1);
    
    leer(v2);
    sort(v2.begin(), v2.end());
    imprimir(v2);
    
    
    return 0;
}
