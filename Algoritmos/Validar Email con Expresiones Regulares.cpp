#include <iostream>
#include <string>
#include <regex> // Librería para expresiones regulares

// Expresión regular básica para validar el formato de email
// [texto]@[texto].[dominio]
const std::regex EMAIL_REGEX("^\\w+([\\.-]?\\w+)*@\\w+([\\.-]?\\w+)*(\\.\\w{2,3})+$");

void validar_email() {
    std::string email;

    std::cout << "--- Verificador de Email (Regex) ---" << std::endl;
    std::cout << "Ingresa una dirección de correo electrónico: ";
    std::getline(std::cin >> std::ws, email);

    std::cout << "\n=====================================" << std::endl;
    
    // std::regex_match compara la cadena con el patrón
    if (std::regex_match(email, EMAIL_REGEX)) {
        std::cout << "El email '" << email << "' es VÁLIDO." << std::endl;
    } else {
        std::cout << "El email '" << email << "' es INVÁLIDO según el patrón Regex." << std::endl;
    }
    std::cout << "=====================================" << std::endl;
}

int main() {
    validar_email();
    return 0;
}