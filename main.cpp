/*
 * HLC Tema 1 Actividad 2.1
 * Vignolo Thiago
 */

#include <iostream>

using namespace std;

//Suma de dos numeros reales
inline void suma(double val1, double val2, double &resul){resul = val1 + val2;}

//Area y perimetro de un rectangulo
inline void calculaAreaPerimetroRectangulo(double val1, double val2, double &area, double &perimetro){
    area = val1 * val2;
    perimetro = val1 * 2 + val2 * 2;}

//Factorial de un numero
void factorial(int val, int &resul);

//Determinar si un numero es par
inline void esPar(int val, bool &par){par = (val % 2 == 0);}

//Determinar si un numero es primo
void esPrimo(int val, bool &primo);

//Calcular la suma, resta, multiplicacion y division de dos numeros, indicando la
//funcion si ha ocurrido algun error.
int calculo (double val1, double val2, double &suma, double &resta, double &mult, double &div);




int main() {
    double resul;
    double area, perimetro;
    int result;

    suma(3, 4, resul);
    cout << "Suma 3 + 4: " << resul << endl;

    calculaAreaPerimetroRectangulo(5, 6, area, perimetro);
    cout << "rectangulo 5x6: \n" << "Area: " << area << "\nPerimetro: " << perimetro << endl;

    factorial(5,result);
    cout << "Factorial 5!: " << result << endl;



    return 0;
}


//Funciones
void factorial(int val, int &resul){
    if (val)
    {
        resul = 1;
        factorial(val-1,resul);
        resul *= val;
    }
}

void esPrimo(int val, bool &primo){
    primo = false;
    for(int i = val;i>1 && !primo;i--)
        if (val % i == 0)
            primo = true;
}

int calculo (double val1, double val2, double &suma, double &resta, double &mult, double &div)
{
    int error = 0;

    if (val2 == 0)
        error = 1;
    else{
        suma = val1 + val2;
        resta = val1 - val2;
        mult = val1 * val2;
        div = val1 / val2;
    }

    return error;
}