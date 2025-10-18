#include <iostream>
#include <cmath>
#include <iomanip>

// Constante para el valor de Pi (usado para la conversión de grados a radianes)
const double PI = 3.14159265358979323846;

// Función para convertir grados a radianes
double to_radians(double degrees) {
    return degrees * (PI / 180.0);
}

// Función para convertir radianes a grados
double to_degrees(double radians) {
    return radians * (180.0 / PI);
}

void resolver_triangulo_lal() {
    double lado_b, lado_c, angulo_A_deg;
    
    std::cout << "--- Solucionador de Triángulos (LAL) ---" << std::endl;
    std::cout << "Se conocen dos lados y el ángulo entre ellos." << std::endl;
    
    std::cout << "Ingresa la longitud del lado b: ";
    if (!(std::cin >> lado_b)) return;
    
    std::cout << "Ingresa la longitud del lado c: ";
    if (!(std::cin >> lado_c)) return;
    
    std::cout << "Ingresa el ángulo A (en grados) entre b y c: ";
    if (!(std::cin >> angulo_A_deg)) return;

    if (angulo_A_deg <= 0 || angulo_A_deg >= 180) {
        std::cout << "Error: El ángulo debe ser positivo y menor a 180 grados." << std::endl;
        return;
    }
    
    // 1. Convertir el ángulo A a radianes
    double angulo_A_rad = to_radians(angulo_A_deg);
    
    // 2. Aplicar la LEY DE COSENOS para encontrar el tercer lado 'a':
    // a^2 = b^2 + c^2 - 2bc * cos(A)
    double lado_a_cuadrado = (lado_b * lado_b) + (lado_c * lado_c) - 
                             (2 * lado_b * lado_c * std::cos(angulo_A_rad));
    
    double lado_a = std::sqrt(lado_a_cuadrado);

    // 3. Aplicar la LEY DE COSENOS para encontrar el ángulo 'B':
    // cos(B) = (a^2 + c^2 - b^2) / (2ac)
    double cos_B = ((lado_a * lado_a) + (lado_c * lado_c) - (lado_b * lado_b)) / 
                   (2 * lado_a * lado_c);
    
    // Nota: El valor de cos_B puede tener errores de precisión, se recorta para evitar errores en acos
    if (cos_B > 1.0) cos_B = 1.0;
    if (cos_B < -1.0) cos_B = -1.0;
    
    double angulo_B_rad = std::acos(cos_B);
    double angulo_B_deg = to_degrees(angulo_B_rad);

    // 4. Calcular el ángulo 'C' usando la suma de ángulos (180 grados):
    // C = 180 - A - B
    double angulo_C_deg = 180.0 - angulo_A_deg - angulo_B_deg;
    
    // --- Salida de Resultados ---
    std::cout << "\n=====================================" << std::endl;
    std::cout << std::fixed << std::setprecision(4); // Mostrar 4 decimales
    std::cout << "El Triángulo Resuelto:" << std::endl;
    
    std::cout << "Lado a: " << lado_a << std::endl;
    std::cout << "Lado b: " << lado_b << std::endl;
    std::cout << "Lado c: " << lado_c << std::endl;
    
    std::cout << "Ángulo A: " << angulo_A_deg << " grados" << std::endl;
    std::cout << "Ángulo B: " << angulo_B_deg << " grados" << std::endl;
    std::cout << "Ángulo C: " << angulo_C_deg << " grados" << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    resolver_triangulo_lal();
    return 0;
}