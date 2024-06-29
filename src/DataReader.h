// DataReader.h
template <typename T>
class DataReader {
public:
    virtual T readData() = 0;
    virtual ~DataReader() = default;
};
