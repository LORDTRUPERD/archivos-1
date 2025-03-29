#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream archivoOrigen("origen.txt");  // Abrir el archivo en modo lectura
    std::ofstream archivoDestino("destino.txt");  // Abrir el archivo en modo escritura

    if (!archivoOrigen) {
        std::cerr << "Error al abrir el archivo origen.txt" << std::endl;
        return 1;
    }

    if (!archivoDestino) {
        std::cerr << "Error al crear el archivo destino.txt" << std::endl;
        return 1;
    }

    std::string linea;
    while (getline(archivoOrigen, linea)) {
        archivoDestino << linea << std::endl;  // Escribir línea en el archivo destino
    }

    archivoOrigen.close();
    archivoDestino.close();

    std::cout << "Copia completada con éxito." << std::endl;
    return 0;
}


