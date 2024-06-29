// EmailDistributor.h
#include "DataDistributor.h"
#include <string>
#include <iostream>

class EmailDistributor : public DataDistributor<std::string> {
public:
    void distributeData(const std::string& data) override {
        // Implementación de distribución de datos por correo electrónico
        std::cout << "Distributing data via email: " << data << std::endl;
    }
};
