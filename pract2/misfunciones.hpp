#ifndef MISFUNCIONES_INCLUDED_
#define MISFUNCIONES_INCLUDED_

#include <vector>

namespace misf {

    bool EsPar(int n);
    bool EsPrimo(int numero);
    int ContarDivisores(int numero);
    int ContarOlasCalor(const std::vector<double>& v, int dias, double temp);

}

#endif
