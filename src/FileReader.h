// FileReader.h
#include "DataReader.h"
#include <string>

class FileReader : public DataReader<std::string> {
public:
    std::string readData() override {
        // Implementación de lectura de archivo
        return "data from file";
    }
};
