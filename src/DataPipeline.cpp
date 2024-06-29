// DataPipeline.h
#include "DataReader.h"
#include "DataProcessor.h"
#include "DataDistributor.h"
#include <memory>

template <typename T>
class DataPipeline {
private:
    std::shared_ptr<DataReader<T>> dataReader;
    std::shared_ptr<DataProcessor<T>> dataProcessor;
    std::shared_ptr<DataDistributor<T>> dataDistributor;

public:
    DataPipeline(std::shared_ptr<DataReader<T>> reader, 
                 std::shared_ptr<DataProcessor<T>> processor, 
                 std::shared_ptr<DataDistributor<T>> distributor) 
        : dataReader(reader), dataProcessor(processor), dataDistributor(distributor) {}

    void executePipeline() {
        T data = dataReader->readData();
        T processedData = dataProcessor->processData(data);
        dataDistributor->distributeData(processedData);
    }
};
