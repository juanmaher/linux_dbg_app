// DataProcessor.h
template <typename T>
class DataProcessor {
public:
    virtual T processData(const T& data) = 0;
    virtual ~DataProcessor() = default;
};
