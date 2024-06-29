// TextProcessor.h
#include "DataProcessor.h"
#include <string>

class TextProcessor : public DataProcessor<std::string> {
public:
    std::string processData(const std::string& data) override {
        // Implementación de procesamiento de texto
        return "processed " + data;
    }
};
