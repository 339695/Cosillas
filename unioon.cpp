/*manejo d uniones
son estructueas de datos que permiten almacenar diferentes tipos de datos en un mismo espacio de memoria*/
#include <iostream>
using namespace std;
struct Fecha{
    int dd,aa;
    string mm;
};
struct Refresco{
    int claveRef;
    string nombreRef;
    float preRef;
    Fecha fecProd;
};
