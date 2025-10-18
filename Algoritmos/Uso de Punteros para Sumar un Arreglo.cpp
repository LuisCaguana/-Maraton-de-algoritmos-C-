#include <iostream>

void sumar_con_punteros() {
    int arreglo[] = {10, 20, 30, 40, 50};
    // Calcular el tamaño del arreglo
    size_t n = sizeof(arreglo) / sizeof(arreglo[0]); 
    
    long long suma = 0;
    
    // Puntero que apunta al inicio del arreglo
    int* ptr_inicio = arreglo; 
    
    // Puntero que apunta al lugar justo después del final del arreglo
    int* ptr_fin = arreglo + n; 
    
    std::cout << "--- Suma de Arreglo con Punteros ---" << std::endl;
    std::cout << "Elementos: 10, 20, 30, 40, 50" << std::endl;
    
    // Iteración usando punteros
    // Mientras el puntero actual no sea el puntero final
    for (int* ptr_actual = ptr_inicio; ptr_actual != ptr_fin; ++ptr_actual) {
        // Desreferenciar el puntero (*ptr_actual) para obtener el valor
        suma += *ptr_actual;
    }

    std::cout << "\n=====================================" << std::endl;
    std::cout << "Suma total del arreglo: " << suma << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    sumar_con_punteros();
    return 0;
}