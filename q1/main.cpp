#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    Data d1 = Data();

    d1.setData(31, 12, 1999);
    d1.exibir();

    d1.avancaDia();    
    d1.exibir();

    Data d2 = Data(31, 13, 1999);
    d2.exibir();

    return 0;
}
