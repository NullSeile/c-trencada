#include <math.h>

// Funcions trigonometriques
double sinus(double x) {
    return sin(x);
}

double cosinus(double x) {
    return cos(x);
}

double tangent(double x) {
    return tan(x);
}

double arcsinus(double x) {
    return asin(x);
}

double arccosinus(double x) {
    return acos(x);
}

double arctangent(double x) {
    return atan(x);
}

double arctangent_2(double x, double y) {
    return atan2(x, y);
}

// Funcions hiperbòliques
double sinus_hiperbòlic(double x) {
    return sinh(x);
}

double cosinus_hiperbòlic(double x) {
    return cosh(x);
}

double tangent_hiperbòlic(double x) {
    return tanh(x);
}

double arcsinus_hiperbòlic(double x) {
    return asinh(x);
}

double arccosinus_hiperbòlic(double x) {
    return acosh(x);
}

double arctangent_hiperbòlic(double x) {
    return atanh(x);
}

//Funcions exponencials i logaritmiques
double exponencial(double x) {
    return exp(x);
}

double exponencial_2(double x) {
    return exp2(x);
}

double exponencial_menys_1(double x) {
    return expm1(x);
}

double logaritme(double x) {
    return log(x);
}

double logaritme_10(double x) {
    return log10(x);
}

double logaritme_2(double x) {
    return log2(x);
}

double logaritme_més_1(double x) {
    return log1p(x);
}

// Funcions de potencies
double potència(double base, double exponent) {
    return pow(base, exponent);
}

double arrel_quadrada(double x) {
    return sqrt(x);
}

double arrel_cubica(double x) {
    return cbrt(x);
}

double hipotenusa(double x, double y) {
    return hypot(x, y);
}

// Altres Funcions
double sostre(double x) {
    return ceil(x);
}

double terra(double x) {
    return floor(x);
}

double trunca(double x) {
    return trunc(x);
}

double arrodoneix(double x) {
    return round(x);
}

double copia_signe(double x, double y) {
    return copysign(x, y); 
}

double no_es_un_numero(const char* etiqueta) {
    return nan(etiqueta);
}

double seguent_despres(double x, double y) {
    return nextafter(x, y);
}

double seguent_en_direccio_de(double x, double y) {
    return nexttoward(x, y);
}

double diferencia_dobles(double x, double y) {
    return fdim(x, y);
}

double maxim_dobles(double x, double y) {
    return fmax(x, y);
}

double minim_dobles(double x, double y) {
    return fmin(x, y);
}

double valor_absolut_dobles(double x) {
    return fabs(x);
}

