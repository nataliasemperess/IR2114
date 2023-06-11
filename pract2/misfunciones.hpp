#ifndef MISFUNCIONES_INCLUDED_
#define MISFUNCIONES_INCLUDED_

#include <vector>
#include <string>

namespace misf {

    bool EsPar(int n);
    bool EsPrimo(int numero);
    int ContarDivisores(int numero);
    int ContarOlasCalor(const std::vector<double>& v, int dias, double temp);
    std::string ObtenerPalabra(const std::string& s, int numero);

}

#endif
