#include <iostream>
#include <vector>
#include <algorithm>


int main() {

    int numero;
    int numero_real;
    int divisor = 2;
    int resto;
    int bit_falta;

    std::vector<int> resultado;
    std::cout << "Digite um Numero inteiro de 0 a 255: ";

    if (!(std::cin >> numero)) {
        std::cout << "Entrada Invalida!";
        return 1;
    }
    if (numero < 0 || numero > 255) {
        std::cout << "Numero invalido!";
        return 1;
    }
    
    numero_real = numero;

    while (numero) {
        resto = numero % divisor;
        numero = numero / divisor;
        resultado.push_back(resto);

    }

    std::reverse(resultado.begin(), resultado.end());

    bit_falta = 8 - resultado.size();
    resultado.insert(resultado.begin(),bit_falta,0);

    std::cout << "Decimal Calculado: " << numero_real << '\n';

    std::cout << "Numero Binario: ";
    for (int resu : resultado) {
        std::cout << resu;
    }
    return 0;

}
