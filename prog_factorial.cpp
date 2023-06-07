#include <iostream>


int main(){
    
    int num;
    long factorial = 1;

    
    std::cout<<"Introduce un número entero: "; std::cin>>num;
    
    for (int i = 1; i <= num;i++){
        
        factorial *= i;
        
    }
    std::cout<<num<<" ! = "<<factorial<<std::endl;
    return 0;
}


