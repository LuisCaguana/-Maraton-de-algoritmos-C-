#include <iostream>
#include <string>
#include <sstream> // Para std::istringstream
#include <algorithm>

bool es_ip_valida(const std::string& ip) {
    std::istringstream ss(ip);
    std::string segmento_str;
    int segmento_int;
    int contador_puntos = 0;

    // 1. Iterar sobre los segmentos separados por punto
    while (std::getline(ss, segmento_str, '.')) {
        contador_puntos++;
        
        // 2. Verificar que el segmento no esté vacío
        if (segmento_str.empty()) return false;
        
        // 3. Convertir a entero
        try {
            segmento_int = std::stoi(segmento_str);
        } catch (const std::exception& e) {
            return false; // Error en la conversión (ej. contiene letras)
        }

        // 4. Verificar el rango (0 a 255)
        if (segmento_int < 0 || segmento_int > 255) {
            return false;
        }
    }

    // 5. Verificar que haya exactamente 4 segmentos
    return contador_puntos == 4;
}

int main() {
    std::string ip1 = "192.168.1.10";
    std::string ip2 = "256.0.0.1";
    std::string ip3 = "10.10.10";
    std::string ip4 = "abc.1.1.1";
    
    std::cout << "--- Verificador Básico de IP Válida ---" << std::endl;
    
    std::cout << ip1 << ": " << (es_ip_valida(ip1) ? "Válida" : "Inválida") << std::endl;
    std::cout << ip2 << ": " << (es_ip_valida(ip2) ? "Válida" : "Inválida") << std::endl;
    std::cout << ip3 << ": " << (es_ip_valida(ip3) ? "Válida" : "Inválida") << std::endl;
    std::cout << ip4 << ": " << (es_ip_valida(ip4) ? "Válida" : "Inválida") << std::endl;

    return 0;
}