#include <iostream>
#include <limits> // Para limpiar el buffer

void verificar_signo() {
    double numero;

    std::cout << "--- Verificador de Número (Positivo, Negativo o Cero) ---" << std::endl;
    std::cout << "Ingresa un número (puede ser decimal): ";

    // Obtener y validar la entrada
    if (!(std::cin >> numero)) {
        std::cout << "[ERROR] Entrada inválida. Debes ingresar un valor numérico." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    std::cout << "\n=====================================" << std::endl;

    // Lógica de verificación usando estructuras condicionales (if / else if / else)
    if (numero > 0) {
        std::cout << "El número " << numero << " es POSITIVO." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número " << numero << " es NEGATIVO." << std::endl;
    } else {
        // La única otra opción es que sea cero
        std::cout << "El número es CERO." << std::endl;
    }
    
    std::cout << "=====================================" << std::endl;
}

int main() {
    verificar_signo();
    return 0;
}